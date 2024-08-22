     #include <iostream>

// Base class

class Base {

public:

    void displayBase() {

        std::cout << "Base class\n";

    }

};

// Derived class 1 inheriting from Base

class Derived1 : public Base {

public:

    void displayDerived1() {

        std::cout << "Derived1 class\n";

    }

};

 

// Derived class 2 inheriting from Base

class Derived2 : public Base {

public:

    void displayDerived2() {

        std::cout << "Derived2 class\n";

    }

};

int main() {

    // Creating an object of the Derived1 class

    Derived1 derived1Obj;

 

    // Accessing members of Base using the Derived1 class object

    derived1Obj.displayBase();

 

    // Accessing members of Derived1 class

    derived1Obj.displayDerived1();

 

    // Creating an object of the Derived2 class

    Derived2 derived2Obj;

 

    // Accessing members of Base using the Derived2 class object

    derived2Obj.displayBase();

 

    // Accessing members of Derived2 class

    derived2Obj.displayDerived2();

 

    return 0;

}

