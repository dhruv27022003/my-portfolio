//RAM
#include <bits/stdc++.h>
#define ll long long
#define pp push_back
#define vv vector<int>
using namespace std;
const int N = 1e3+10;
vector <int> v[N];
bool vis[N];
// 8 5
// 1 2
// 2 3
// 2 4
// 3 5
// 6 7
bool mai(int ve){
     vis[ve]=true;
     for(int child : v[ve]){
         if(vis[child])continue;

         mai(child);
     }
    
    
     
     
     return true;
     }
    int main(){
    int n,e;
    cin>>n>>e;
    int x;
    for(int i=0;i<e;i++){
   int v1,v2;
   cin>>v1>>v2;
  
   v[v1].push_back(v2);
   v[v2].push_back(v1);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
if(vis[i]!=true){
mai(i);
// cout<<i<<endl;s
ans++;
}
    }
cout<<ans;
    return 0;
    }