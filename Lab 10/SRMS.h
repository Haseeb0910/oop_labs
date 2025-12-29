#ifndef hr
#define hr

#include<iostream>
#include<string>
using  namespace std;

class SRMS
{
  private:
  string name;
  string rollno;
  float cgpa;
  public:

  //default constructor
  SRMS();
  //parametrized constructor
  SRMS(string n, string r, float c);

  //set details
  void setdetails(string n, string r, float c);
 
  //display
  void displayDetails() const;  

  //is on dean's honor list
  bool isonList();
};

#endif