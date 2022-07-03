//RAM
#include <bits/stdc++.h>
#define ll long long
#define pp push_back
#define vv vector<int>
using namespace std;
void mai(){
     int n;
     cin>>n;
      vv v(n);
    ll s =0;
    int c =0;
      for(int i=0;i<n;i++){
          cin>>v[i];
          s+=v[i];
        //   if(v[i]==0){c++;}
      }
    if(s%3!=0 || n<3){cout<<"0";return;}
    else{

        //1 2 3 0 3

         int a = s/3;
         int s1=0;
         for(int i =0;i<n-2;i++){
            s1+=v[i];
            if(s1==a){c++;}
        }
s1=0;
         for(int i =n-1;i>1;i--){
            s1+=v[i];
            if(s1==a){c++;}
        }



    cout<<c-1;


    }
    
     
     
     
     }
    int main(){
    int t;
      t=1;;
    for(int tt=0;tt<t;tt++){
    mai(); 
    cout<<endl;  
     }
    return 0;
    }