#include <string>
#include "SRMS.h"
using namespace std;

SRMS::SRMS()
{
    name = "";
    rollno = "";
    cgpa = 0; 
}

SRMS::SRMS(string n, string r, float c)
{
    name = n;
    rollno = r;
    cgpa = c;
}

void SRMS::setdetails(string n, string r, float c)
{
    name = n;
    rollno = r;
    cgpa = c;
}

void SRMS::displayDetails() const
{
    cout << "Name of Student is : " << name << endl;
    cout << "Roll no of Student is : " << rollno << endl;
    cout << "CGPA of Student is : " << cgpa << endl;
}

bool SRMS::isonList()
{
  if(cgpa >= 3.5)
  {
    return true;
  }
  return false;
}