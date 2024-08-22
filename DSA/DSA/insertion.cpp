/**
#include<iostream>
using namespace std;
int main(){
    int n,arr[50],po,x;
    cout<<"enter the size  of elements ";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the insrtion position:";
    cin>>po;
    cout<<"enter new elements ";
    cin>>x;
    for(int i=n-1;i>=po-1;i--){ // i badh raha ha is liya po-1 ek picha rahega
        arr[i+1]=arr[i];  // samay marko dhaka danan ka liya mujha apna equal manta ha
    }
    arr[po-1]=x; //  sabki seat ek ek aga bhad rahi han
    n++;
    cout<<"elements are print as:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
    }  
    */
   #include<iostream>
   using namespace std;
   int main(){
    int n,arr[50],po,x;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the insertion position:";
    cin>>po;
    cout<<"enter the element:";
    cin>>x;
    for(int i=n-1;i>=po-1;i--){
        arr[i+1]=arr[i];

    }
    arr[po-1]=x;
    n++;
    cout<<"after insertion :";
    for(int i=0;i<n;i++){
        cout<<arr[i];
        cout<<"\t";
    }
    return 0;


   }