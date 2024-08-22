#include <iostream>
using namespace std;
class Shape
{ // Base class
public:
    void setWidth(int w)
    {
        Width = w;
    }
    void setHeight(int h)
    {
        Height = h;
    }

protected:
    int Width;
    int Height;
};
class rectangle : public Shape
{ // Derieved class
public:
    int getArea()
    {
        return (Width * Height);
    }
};
class Triangle : public Shape
{
public:
    int getArea()
    {
        return (Width * Height / 2);
    }
};
int main()
{
    rectangle rect;
    Triangle tri;
    rect.setWidth(10);
    rect.setHeight(10);
    tri.setWidth(5);
    tri.setHeight(10);
    cout << "Area of rectangle is : " << rect.getArea() << endl;
    cout << "Area of triangle is : " << tri.getArea();
    return 0;
}