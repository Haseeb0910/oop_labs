#include<iostream>
#include<cmath>
#include"Point3d.h"

using namespace std;

//setters
void Point3d::setx(double x)
{
    this->x = x;
}
void Point3d::sety(double y)
{
    this->y = y;
}
void Point3d::setz(double z)
{
    this->z = z;
}
void Point3d::setpoint(double x , double y , double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

//getters
double Point3d::getx()
{
    return this->x;
}
double Point3d::gety()
{
    return this->y;
}
double Point3d::getz()
{
    return this->z;
}

//constructors
Point3d::Point3d()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}
Point3d::Point3d(double x , double y , double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}
Point3d::Point3d(const Point3d &obj)
{
    this->x = obj.x;
    this->y = obj.y;
    this->z = obj.z;
}

//functions
void Point3d::display()
{
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
Point3d Point3d::operator+(const Point3d &rhs)
{
    return Point3d(this->x+rhs.x,this->y+rhs.y,this->z+rhs.z);
}
Point3d Point3d::operator-(const Point3d &rhs)
{
    return Point3d(this->x-rhs.x,this->y-rhs.y,this->z-rhs.z);
}
Point3d Point3d::operator*(const Point3d &rhs)
{
    return Point3d(this->x*rhs.x,this->y*rhs.y,this->z*rhs.z);
}
bool Point3d::operator==(const Point3d &rhs)
{
    return(this->x==rhs.x,this->y==rhs.y,this->z==rhs.z);
}
double Point3d::distance(const Point3d &rhs)
{
    double dis;
    dis = sqrt(pow(this->x-rhs.x,2) + pow(this->y-rhs.y,2) + pow(this->z-rhs.z,2));
    if(dis==0)
    {
        cout<<"points are prallel"<<endl;
    }
    return dis;
}
Point3d Point3d::mid(Point3d &rhs)
{
    return Point3d((this->x + rhs.x)/2, (this->y + rhs.y)/2, (this->z + rhs.z)/2);
}
double Point3d::dotproduct(const Point3d &rhs)
{
    return double((this->x*rhs.x) + (this->y*rhs.y) +  (this->z*rhs.z));
}
Point3d Point3d::crossproduct(const Point3d &rhs)
{
    Point3d x;
    x.x = (this->y*rhs.z) - (this->z*rhs.y);
    x.y = (this->z*rhs.x) - (this->x*rhs.z);
    x.z = (this->x*rhs.y) - (this->y*rhs.x);
    return x;
}
double Point3d::magnitude()
{
    double mag;
    mag = sqrt((x*x) + (y*y) + (z*z));
    return mag;
}

//friend functions
ostream &operator<<(ostream &ostrm , const Point3d &rhs)
{
    ostrm<<"("<<rhs.x<<","<<rhs.y<<","<<rhs.z<<")"<<endl;
    return ostrm;
}
istream &operator>>(istream &istrm , Point3d &rhs)
{
    cout<<"Enter x , y and z : ";
    istrm >> rhs.x >> rhs.y >> rhs.z;
    return istrm;
}

Point3d::~Point3d()
{}