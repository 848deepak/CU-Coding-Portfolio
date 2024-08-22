//------------------------------- SINGLE INHERITANCE --------------------------------------

#include <iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "This is a vehicle" << endl;
    }
};
class car : public vehicle
{
};
int main()
{
    car A;
    return 0;
}

// -------------------------------- MULTIPLE INHERITANCE -----------------------------------
/*
#include <iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "This is a vehicle.\n";
    }
};
class fourwheeler
{
public:
    fourwheeler()
    {
        cout << "This is a fourwheeler." << endl;
    }
};
class car : public vehicle, public fourwheeler
{
};
int main()
{
    car A;
    return 0;
}
*/
//----------------------------MULTILEVEL INHERITANCE--------------------------------------
/*
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
*/
//------------------------------HYBRID INHERITANCE------------------------------------
/*
#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
        cout<<"This is a vehicle."<<endl;
    }
};
class tyre{
    public:
    tyre(){
        cout<<"tyre of a vehicle."<<endl;
    }
};
class car : public vehicle{
};
class bus : public vehicle ,public tyre{

};
int main()
{
    bus A;
    return 0;
}
*/
//---------------------------------HIERARCHICAL INHERITANCE----------------------------------