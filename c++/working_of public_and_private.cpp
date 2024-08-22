// Program to illustrate the working of
// public and private in C++ Class

#include <iostream>
using namespace std;

class Room {

   private:
    double length;
    double breadth;
    double height;

   public:

    // function to initialize private variables
    void initData(double len, double brth, double hgt) {
        length = len;
        breadth = brth;
        height = hgt;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1;

    // pass the values of private variables as arguments
    room1.initData(42.5, 30.8, 19.2);

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}
/*The above example is nearly identical to the first example, except that the class variables are now private.

Since the variables are now private, we cannot access them directly from main(). Hence, using the following code would be invalid:

// invalid code
obj.length = 42.5;
obj.breadth = 30.8;
obj.height = 19.2;
Instead, we use the public function initData() to initialize the private variables via the function parameters double len, double brth, and double hgt.*/