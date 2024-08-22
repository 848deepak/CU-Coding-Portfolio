#include <iostream>
using namespace std;
namespace first_space
{
    void fun()
    {
        cout << "first" << endl;
    }
}
namespace second_space
{
    void fun()
    {
        cout << "second" << endl;
    }
}
int main()
{
    first_space::fun();
    second_space::fun();
    return 0;
}