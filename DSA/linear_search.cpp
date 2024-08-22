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
    cout << "Enter the element you want to search";
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
        cout << "Number is not in the list";
    }
    return 0;
}