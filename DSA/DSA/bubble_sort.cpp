#include <iostream>
using namespace std;
int main()
{
    unsigned int n, a[50], min, temp, l, i;
    cout << " How many elements you want to enter : ";
    cin >> n;
    cout << "\n Enter the elements \n";
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int k = 1; k < n; k++)
    {
        min = a[k];
        for (int j = k + 1; j <= n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                l = j;
            }
        }
        temp = a[k];
        a[k] = min;
        a[l] = temp;
    }
    cout << "\n Sorted array is: \n";
    for (i = 1; i <= n; i++)
        cout << a[i] << "\t";
    return 0;
}