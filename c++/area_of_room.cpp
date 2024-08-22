//area of room
#include<iostream>

using namespace std;

class Room {

private:

    int length;

    int breadth;

    int height;

 

public:

 

    // Member function to calculate and display the area of the room

    void calculateArea(int length, int breadth) {

        int area = length * breadth;

        cout << "The area of room is: " << area <<endl;

    }

 

    // Member function to calculate and display the volume of the room

    void calculateVolume(int length, int breadth, int height) {

        int volume = length * breadth * height;

        cout << "The volume of room is: " << volume <<endl;

    }

};

int main() {

    // Assign values to data members

    int roomLength = 10;

    int roomBreadth = 2;

    int roomHeight = 5;

 

    // Create an object of the Room class

    Room myRoom;

 

    // Call member functions to calculate and display area and volume

    myRoom.calculateArea(roomLength, roomBreadth);

    myRoom.calculateVolume(roomLength, roomBreadth, roomHeight);

 

    return 0;

}