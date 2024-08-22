#include <iostream>
using namespace std;
// Base class 1

class Base1 {

public:

    void displayBase1() {

        std::cout << "Base1 class\n";

    }

};

 

// Base class 2

class Base2 {

public:

    void displayBase2() {

        std::cout << "Base2 class\n";

    }

};

 

// Intermediate class inheriting from Base1

class Intermediate : public Base1 {

public:

    void displayIntermediate() {

        std::cout << "Intermediate class\n";

    }

};

 

// Derived class inheriting from Intermediate and Base2

class Derived : public Intermediate, public Base2 {

public:

    void displayDerived() {

        std::cout << "Derived class\n";

    }

};

 

int main() {

    // Creating an object of the Derived class

    Derived derivedObj;

 

    // Accessing members of Base1 using the Derived class object

    derivedObj.displayBase1();

 

    // Accessing members of Base2 using the Derived class object

    derivedObj.displayBase2();

 

    // Accessing members of Intermediate using the Derived class object

    derivedObj.displayIntermediate();

 

    // Accessing members of the Derived class

    derivedObj.displayDerived();

 

    return 0;

}