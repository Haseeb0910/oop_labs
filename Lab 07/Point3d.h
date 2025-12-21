#ifndef Point3D_H
#define Point3D_H

#include <iostream>

using namespace std;

class Point3d
{
protected:
    double x, y, z;

public:
    //setters
    void setx(double x);
    void sety(double y);
    void setz(double z);
    void setpoint(double x , double y , double z);

    //getters
    double getx();
    double gety();
    double getz();

    //constructors
    Point3d();
    Point3d(double x , double y , double z);
    Point3d(const Point3d &obj);
                                                                                                                    
    //methods / funcions
    void display();
    Point3d operator+(const Point3d &rhs);
    Point3d operator-(const Point3d &rhs);
    Point3d operator*(const Point3d &rhs);
    bool operator==(const Point3d &rhs);
    double distance(const Point3d &rhs);
    Point3d mid(Point3d &rhs);
    double dotproduct(const Point3d &rhs);
    Point3d crossproduct(const Point3d &rhs);
    double magnitude();

    //friend functions
    friend ostream &operator<<(ostream &ostrm , const Point3d &rhs);
    friend istream &operator>>(istream &istrm , Point3d &rhs);


    //destructor
    ~Point3d();

};

#endif