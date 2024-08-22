//master recerrance 
#include<iostream>
using namespace std;
int main (){
    int  a , b,c;
    cout<<"enter the value of A"<<endl;
    cin>>a;
    cout<<"enter the value of B"<<endl;
    cin>>b;
    cout<<"enter the value of C"<<endl;
    cin>>c;
 

 int log_ba=log(a)/log(b);
 if(log_ba>c){
    cout<<"O(n^"<<log_ba<<")";
 }
 else if (log_ba<c)
 {
    cout<<"O(n^"<<log_ba*log(c)<<")";
 }
 else{
    cout<<"O(n^"<<(c)<<")"<<endl;
 }
   return 0 ;
}