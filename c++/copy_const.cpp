//COPY CONSTRUCTOR
#include<iostream>
using namespace std;
class copyconstructor{
    private:
    int x,y;
    public:
    copyconstructor(int x1, int y1){
        x = x1;
        y = y1;
    }
    copyconstructor(copyconstructor &Sam)
    {
        x = Sam.x;
        y = Sam.y;
    }
    void display(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    copyconstructor obj1(3,13);
    copyconstructor obj2 = obj1;
    cout<<"Normal constructor:";
    obj1.display();
    cout<<"Copy constructor:";
    obj2.display();
    return 0;
}