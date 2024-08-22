class Room {
    public:
        double length;
        double breadth;
        double height;   

        double calculateArea(){   
            return length * breadth;
        }

        double calculateVolume(){   
            return length * breadth * height;
        }

};
// sample function
void sampleFunction() {
    // create objects
    Room room1, room2;
}

int main(){
    // create objects 
    Room room3, room4;
    return 0;
}
