#include <iostream>
using namespace std;
class Shape
{
public:
    virtual float area() = 0;
    string name;
    Shape(string n) : name(n) {}
    virtual float boundaryLength() = 0;
};
class Rectangle : public Shape
{
    protected:
    float length;
    float width;
    public:
    Rectangle(string n , float l , float w) : Shape(n) , length(l) , width(w) {}
    float boundaryLength()
    {
        return (2*(length+width));
    }
    float area()
    {
        return length*width;
    }
};
class Circle : public Shape
{
    protected:
    float radius;
    public: 
    Circle(string n , float r) : radius(r) , Shape(n) {}
    float boundaryLength()
    {
        return (2*3.14*radius);
    }
    float area()
    {
        return (3.14*radius*radius);
    }
};
class Triangle : public Shape
{
    protected:
    float s1 , s2, s3;
    public:
    Triangle(string n  ,float S1 , float S2 , float S3) : Shape(n) , s1(S1) , s2(S2) , s3(S3) {}
    float boundaryLength()
    {
        return (s1+s2+s3);
    }
    float area() 
    {
        return (0.5*s1*s2);
    }
};
class Square : public Shape
{
    protected:
    float length;
    public:
    Square(string n ,float l) : Shape(n) , length(l) {}
    float boundaryLength()
    {
        return (4*length);
    }
    float area()
    {
        return (2*length);
    }
};

int main()
{
    Shape *s[4];
    s[0] = new Rectangle("Rectangle",2,4);
    s[1] = new Circle("Circle",4);
    s[2] = new Triangle("Triangle",2,4,5);
    s[3] = new Square("Square",4);
    for(int i = 0; i<4; i++)
    {
        cout << "Shape : " << s[i]->name << endl;
        cout << "Boundary Length : " << s[i]->boundaryLength() << endl;
        cout << "Area : " << s[i]->area() << endl;
    }
}