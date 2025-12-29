#include<iostream>
#include"SRMS.h"

using namespace std;

int main()
{
    SRMS s[3];
    for(int i = 0; i<3; i++)
    {
        string name;
        string rollno;
        float cgpa;
        cout << "Enter name of student : ";
        cin >> name;
        cout << "Enter rollno of student : ";
        cin >> rollno
        ;cout << "Enter cgpa of student : ";
        cin >> cgpa;
        s[i].setdetails(name,rollno,cgpa);
    }
    for(int i = 0; i<3; i++)
    {
        s[i].displayDetails();
        s[i].isonList() ? cout << "Student is on Dean's Honor List" : cout << "Student is not on Dean's Honor List";
        cout << endl;
    }

}