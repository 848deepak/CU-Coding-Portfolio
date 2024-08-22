#include <iostream>

using namespace std;

int main()

{

     unsigned int n, a[50], e, f = 0;

     cout << " How many elements you want to enter : ";

     cin >> n;

     cout << "\n Enter the elements \n";

     for (int i = 1; i <= n; i++)

          cin >> a[i];

     cout << "\n The entered elements of arrays are as: \n";

     for (int i = 1; i <= n; i++)

          cout << a[i] << "\n";

     return 0;
}