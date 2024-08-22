// Traversing array using pointer
#include <iostream>
using namespace std;
int main()
{
    int i, A[3];
    int *p;
    p=&A[0];
    cout<<"Input the array elements";
    for(i=0;i<3;i++)    {
     cin>>*(p+i);    }
    cout<<"Array elemenets are:";
    for(i=0;i<3;i++)    {
     cout<<*(p+i)<<endl;    }
    return 0;
}
