#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle()
    {
        cout<<"This is a Vehicle"<<endl;
    }
};
class fourwheeler{
    public:
    fourwheeler()
    {
        cout<<"This is a four wheeler vehicle"<<endl;
    }
};
class car: public vehicle, public fourwheeler {

};
int main(){
    car obj;
    return 0;
}