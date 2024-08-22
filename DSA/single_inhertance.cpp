#include <iostream>

using namespace std;

// Base class

class Base
{

public:
    void displayBase()
    {

        std::cout <<"Base class\n";
    }
};

// Derived class inheriting from Base

class Derived : public Base
{

public:
    void displayDerived()
    {

        std::cout <<"Derived class\n";
    }
};

int main()
{

    // Creating an object of the Derived class

    Derived derivedObj;

    // Accessing members of the Base class using the Derived class object

    derivedObj.displayBase();

    // Accessing members of the Derived class

    derivedObj.displayDerived();

    return 0;
}