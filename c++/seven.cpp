#include <iostream>
using namespace std;
namespace first_space
{
    void func()
    {
        cout << "First" << endl;
    }
}
namespace second_space
{
    void func()
    {
        cout << "second" << endl;
    }
}
using namespace first_space;

int main()
{
    func();

    return 0;
}