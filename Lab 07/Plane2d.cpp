#include<iostream>
#include<cmath>
#include"Point3d.h"

using namespace std;

class Plane2d
{
    protected:
    double a , b , c , d;
    
    public:
    Plane2d();
    Plane2d(double a , double b , double c  , double d);
    bool isOnPlane(Point3d &P) const;
    bool operator==(const Plane2d &rhs) const;
    bool isParallel(const Plane2d &rhs) const;
    double distance(Point3d &P) const;
    void display();
};

Plane2d::Plane2d() : a(0) , b(0) , c(0) , d(0) {};

Plane2d::Plane2d(double a , double b , double c  , double d) : a(a) , b(b) , c(c) , d(d) {};

bool Plane2d::isOnPlane(Point3d &P) const
{
    return (((this->a*P.getx()) + (this->b*P.gety()) + (this->c*P.getz()) + this->d) == 0);
}

bool Plane2d::operator==(const Plane2d &rhs) const
{
    return ((this->a/rhs.a) == (this->b/rhs.b) == (this->c/rhs.c) ==  (this->d/rhs.d));
}

bool Plane2d::isParallel(const Plane2d &rhs) const
{
    return ((this->a/rhs.a) == (this->b/rhs.b) == (this->c/rhs.c));
}

double Plane2d::distance(Point3d &P) const
{
    double d;
    d = abs((this->a*P.getx()) + (this->b*P.gety()) + (this->c*P.getz()) + this->d) / sqrt(this->a*this->a + this->b*this->b + this->c*this->c);
    return d;
}

void Plane2d::display()
{
    cout << this->a <<"x+"<<this->b << "y+" << this->c << "z+" << this->d;
}

int main()
{
    Plane2d P1(2,3,4,5);
    Plane2d P2(9,1,7,3);
    Point3d p2(1,2,3);
    P1.display();
    cout << endl <<  P1.isOnPlane(p2) << endl;
    cout << (P1 == P2) << endl;
    cout << P1.isParallel(P2) << endl;
    cout << P1.distance(p2) << endl;
}