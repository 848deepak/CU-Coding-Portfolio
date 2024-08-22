#include <iostream>

using namespace std;

int main()

{

    int a[10], i; // array to store data

    int n; // variable to store no of elements

    int temp; // variable to swap

    cout << "Enter the size of an array: ";

    cin >> n;

    cout << "Enter the elements in array a[" << n << "]\n";

    for (int i = 0; i < n; i++)

        cin >> a[i];

    for (i = 1; i < n; i++)

    {

        temp = a[i];

        int j = i - 1;

        while ((temp < a[j]) && (j >= 0))

        {

            a[j + 1] = a[j];

            j = j - 1;
        }

        a[j + 1] = temp;
    }

    cout << "The elements after sorting: ";

    for (i = 0; i < n; i++)

        cout << a[i] << "\t";

    return 0;
}

/*
#include<iostream>
using namespace std;
int main()
{
    int tot, arr[50], i, j, temp, small, chk, index;
    cout<<"Enter the Size of Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    for(i=0; i<(tot-1); i++)
    {
        chk=0;
        small = arr[i];
        for(j=(i+1); j<tot; j++)
        {
            if(small>arr[j])
            {
                small = arr[j];
                chk++;
                index = j;
            }
        }
        if(chk!=0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[index] = temp;
        }
    }
    cout<<"\nSorted Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
*/