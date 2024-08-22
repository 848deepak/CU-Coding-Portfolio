/*These are special type of Constructors which takes an object as argument, and is used to copy values of data members of one object into other object. 

*/
#include <iostream>
using namespace std;
class Student
{
    public:
    int rollno;
    string name;
    // first constructor
    Student(int x)
    {
        rollno = x;
        name = "None";
    }
    // second constructor
    Student(int x, string str)
    {
        rollno = x;
        name = str;
    }
};

int main()
{
    // student A initialized with roll no 10 and name None
    Student A(10);
    
    // student B initialized with roll no 11 and name John
    Student B(11, "John");
}