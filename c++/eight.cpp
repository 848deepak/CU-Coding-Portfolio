#include <iostream>
#include <string>
using namespace std;
class person
{
public:
    string name;
    int number;
};
int main()
{
    person obj;
    cout << "Enter name:";
    getline(cin, obj.name);
    cout << "Enter number:";
    cin >> obj.number;
    cout << obj.name << endl
         << obj.number << endl;
    return 0;
}