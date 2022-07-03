// console.log("ryunning...");
document.querySelector('.ham').style.display ='none';
// document.querySelector('.sidebar').style.display ='none';

document.querySelector('.hamb').addEventListener("click", ()=>{
    document.querySelector('.sidebar').classList.toggle('sidebargo');
// console.log("ww");
if(document.querySelector('.sidebar').classList.contains('sidebargo')){
    document.querySelector('.dot').style.display ='inline';
    document.querySelector('.ham').style.display ='none';
}
else{
    document.querySelector('.ham').style.display ='inline';
    document.querySelector('.dot').style.display ='none';

}

})