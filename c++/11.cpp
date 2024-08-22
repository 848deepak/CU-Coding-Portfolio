#include <iostream>
using namespace std;
class Students
{
private:
    int age;
    float marks;

public:
    string name;
    void setData(int a, float m);
    void getData()
    {
        cout << "Student's name is " << name << endl;
        cout << "Student's age is " << age << endl;
        cout << "Student's marks are " << marks << endl;
    }
};
void Students ::setData(int a, float m)
{
    age = a;
    marks = m;
}
int main()
{
    Students samay;
    samay.name = "samay";
    samay.setData(18, 98);
    samay.getData();
    return 0;
}