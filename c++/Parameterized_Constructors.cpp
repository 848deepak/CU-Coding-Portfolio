/*These are the constructors with parameter. Using this Constructor you can provide different values to data members of different objects, by passing the appropriate values as argument.

For example:*/
#include<iostream>
using namespace std;

class Cube {
public:
    int side;
    Cube(int x) {
        side = x;
    }
};

int main() {
    Cube c1(10);
    Cube c2(20);
    Cube c3(30);
    
    cout << c1.side << endl; // Output the side of c1
    cout << c2.side << endl; // Output the side of c2
    cout << c3.side << endl; // Output the side of c3
    
    return 0;
}
