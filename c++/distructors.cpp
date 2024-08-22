#include<iostream>
using namespace std;


class A
{
    public:
    // constructor
    A()
    {
        cout << "Constructor called";
    }

    // destructor
    ~A()
    {
        cout << "Destructor called";
    }
};

int main()
{
    A obj1;   // Constructor Called
    int x = 1;
    if(x)
    {
        A obj2;  // Constructor Called
    }   // Destructor Called for obj2
    return 0;
} //  Destructor called for obj1
