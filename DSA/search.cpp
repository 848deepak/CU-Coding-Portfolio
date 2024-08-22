// Linear search prgram.

#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, item, c, loc;
    cout << "Enter the size of an array:";
    cin >> n;
    cout << "The elemets are:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element you want to search:";
    cin >> item;
    for (i = 0; i < n; i++)
    {
        if (a[i] == item)
        {
            c = 1;
            loc = i;
        }
        else
        {
        }
    }
    if (c == 1)
    {
        cout << "Number found at position: " << loc + 1;
    }
    else
    {
        cout << "Number is not in the list.";
    }
    return 0;
}

//-------------------BINARY SEARCH---------------------
/*
#include<iostream>
using namespace std;
int main()
{
int a[50],n,end,big,item,loc,mid,f=0;
cout<<" How many elements you want to enter : ";
cin>>n;
cout<<"\n Enter the elements \n";
for(loc=1;loc<=n;loc++)
cin>>a[loc];
for(int k=1;k<n;k++)
{
for(int j=1;j<=n-k;j++)
{
if(a[j+1]<a[j])
{
int t=a[j+1];
a[j+1]=a[j];
a[j]=t;
}
}
}
cout<<"\n Enter the number you want to search : ";
cin>>item;
end=n;
big=1;
mid=((big+end)/2);
while(big<=end && a[loc]!=item)
{
if(item<a[mid])
end=mid-1;
else if(item>a[mid])
big=mid+1;
mid=((big+end)/2);
if(item==a[mid])
{
loc=mid;
cout<<"\n Searching successful \n\n Location of "<<item<<" is : "<<loc;
f=1;
break;
}
}
if(f==0)
cout<<"\n Search unsuccessful ";
return 0;
}
*/