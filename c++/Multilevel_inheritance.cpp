   #include <iostream>

// Base class

class Base {

public:

    void displayBase() {

        std::cout << "Base class\n";

    }

};

 

// Intermediate class inheriting from Base

class Intermediate : public Base {

public:

    void displayIntermediate() {

        std::cout << "Intermediate class\n";

    }

};

 

// Derived class inheriting from Intermediate

class Derived : public Intermediate {

public:

    void displayDerived() {

        std::cout << "Derived class\n";

    }

};

 

int main() {

    // Creating an object of the Derived class

    Derived derivedObj;

 

    // Accessing members of Base using the Derived class object

    derivedObj.displayBase();

 

    // Accessing members of Intermediate using the Derived class object

    derivedObj.displayIntermediate();

 

    // Accessing members of the Derived class

    derivedObj.displayDerived();

 

    return 0;

}

