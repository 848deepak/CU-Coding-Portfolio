#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
        cout<<"This is a vehicle"<<endl;
    }
};
    class fourwheeler : public vehicle
    {
        public:
        fourwheeler(){
            cout<<"This is a 4 wheeler vehicle"<<endl;
        }
    };
    class car : public fourwheeler{
        public:
        car(){
            cout<<"This is a car"<<endl;
        }
    };
int main()
{
    car A;
    return 0;
}