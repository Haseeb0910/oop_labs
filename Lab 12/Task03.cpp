#include <iostream>
#include<string>
using namespace std;
class Shape
{
public:
    string name;
    Shape(string n) : name(n) {}
    virtual ~Shape() {}
};
class Rectangle : public Shape
{
protected:
    float length;
    float width;

public:
    Rectangle(string n, float l, float w) : Shape(n), length(l), width(w) {}
    float boundaryLength()
    {
        return (2 * (length + width));
    }
    float area()
    {
        return length * width;
    }
};
class Circle : public Shape
{
protected:
    float radius;

public:
    Circle(string n, float r) : radius(r), Shape(n) {}
    float boundaryLength()
    {
        return (2 * 3.14 * radius);
    }
    float area()
    {
        return (3.14 * radius * radius);
    }
};

int main()
{
    Shape *s[4];
    s[0] = new Rectangle("Rectangle", 2, 4);
    s[1] = new Circle("Circle", 2);
    s[2] = new Circle("Circle", 4);
    s[3] = new Rectangle("Rectangle", 3, 5);
    for (int i = 0; i < 4; i++)
    {
        cout << "Shape : " << s[i]->name << endl;
        if (Rectangle *r = dynamic_cast<Rectangle *>(s[i]))
        {
            cout << "Area : " << r->area() << endl;
        }
        else if (Circle *c = dynamic_cast<Circle *>(s[i]))
        {
            cout << "Area : " << c->area() << endl;
        }
    }
}