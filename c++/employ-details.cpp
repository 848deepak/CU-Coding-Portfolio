/* #include <iostream>
using namespace std;
class employee
{
private:
    string designation;
    float salary;

public:
    string name;
    int age;

    void asus(string d, float s);
    void hello()
    {
        cout << "Name of employee is:" << name << endl;
        cout << "Age is:" << age << endl;
        cout << "Designation is:" << designation << endl;
        cout << "Salary is:" << salary << endl;
    }
};
void employee ::asus(string d, float s)
{
    designation = d;
    salary = s;
}
int main()
{
    employee A;
    A.name = "Samay sood";
    A.age = 18;
    A.asus("VPO Rajpur,Himachal Pradesh", 100000);
    A.hello();
    return 0;
}  */

#include <iostream>
using namespace std;
class employee
{
    char name[20];
    int age;
    char desi[10];
    float salary;

public:
    void samay();
    void sood();
};
void employee ::samay()
{
    cout << "\n\tEnter Employee Name : ";

    cin >> name;

    cout << "\n\tEnter Employee Age : ";

    cin >> age;

    cout << "\n\tEnter Employee Designation:";

    cin >> desi;

    cout << "\n\tEnter Employee Salary : ";

    cin >> salary;
}
void employee ::sood()
{
    cout << "\nEmployee Name : " << name;

    cout << "\nEmployee Age : " << age;

    cout << "\nEmployee Designation:" << desi;

    cout << "\nEmployee Salary : " << salary;
}
int main()
{
    employee A[2];
    int i;
    for (i = 1; i <= 2; i++)
    {
        A[i].samay();
    }
    for (i = 1; i <= 2; i++)
    {
        A[i].sood();
    }
    return 0;
}