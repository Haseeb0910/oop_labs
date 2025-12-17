#include <iostream>
#include <string>

using namespace std;

class Course
{
private:
    string code;
    string title;
    float creditHours;

public:
    string getCode()
    {
        return code;
    }

    void setCode(string _code)
    {
        code = _code;
    }

    string getTitle()
    {
        return title;
    }

    void setTitle(string _title)
    {
        title = _title;
    }

    float getCreditHours()
    {
        return creditHours;
    }

    void setCreditHours(float _crHrs)
    {
        creditHours = _crHrs;
    }
};

class Student
{
private:
    string roll_no;
    string name;
    float cr_Hours;
    Course course[3];

public:
    string getrollno()
    {
        return roll_no;
    }

    void setrollno(string rollno)
    {
        roll_no = rollno;
    }

    string getname()
    {
        return name;
    }

    void setname(string name)
    {
        this->name = name;
    }

    float getCrHours()
    {
        return cr_Hours;
    }

    void setCrtHours(float _crHrs)
    {
        cr_Hours = _crHrs;
    }
    Course getcourse(int index)
    {
        return course[index];
    }
    void setcourse(Course c, int index)
    {
        course[index] = c;
    }
};

int maint1()
{
    Course course[4];
    course[0].setCode("CC-211");
    course[0].setTitle("Programing Fundamentals");
    course[0].setCreditHours(3);
    course[1].setCode("CC-212");
    course[1].setTitle("Probability");
    course[1].setCreditHours(3);
    course[2].setCode("CC-213");
    course[2].setTitle("Functional English");
    course[2].setCreditHours(2);
    course[3].setCode("CC-214");
    course[3].setTitle("Quran Translation");
    course[3].setCreditHours(0.5);

    for (int i = 0; i < 4; i++)
    {
        cout << "Details of course "<< i+1<<" are" << endl;
        cout << "Code   : " << course[i].getCode() << endl;
        cout << "Title  : " << course[i].getTitle() << endl;
        cout << "Credits: " << course[i].getCreditHours() << endl;
    }

    return 0;
}

int maint2()
{
    Course *course = new Course[4];
    course[0].setCode("CC-211");
    course[0].setTitle("Programing Fundamentals");
    course[0].setCreditHours(3);
    course[1].setCode("CC-212");
    course[1].setTitle("Probability");
    course[1].setCreditHours(3);
    course[2].setCode("CC-213");
    course[2].setTitle("Functional English");
    course[2].setCreditHours(2);
    course[3].setCode("CC-214");
    course[3].setTitle("Quran Translation");
    course[3].setCreditHours(0.5);

    for (int i = 0; i < 4; i++)
    {
        cout << "Details of course "<< i+1<<" are" << endl;
        cout << "Code   : " << course[i].getCode() << endl;
        cout << "Title  : " << course[i].getTitle() << endl;
        cout << "Credits: " << course[i].getCreditHours() << endl;
    }

    delete[] course;

    return 0;
}

int main()
{
    Student s;
    string rollno;
    string name;
    float cr_hrs;
    string code,title;
    float cr_hours;

    cout<<"Enter roll no : ";
    getline(cin,rollno);
    cout<<"Enter name : ";
    getline(cin,name);
    cout<<"Enter credits : ";
    cin>>cr_hrs;
    s.setrollno(rollno);
    s.setname(name);
    s.setCrtHours(cr_hrs);
    for(int i = 0; i<3; i++)
    {
        Course c;
        cout<<"Enter code of course "<<i+1<<" : ";
        cin.ignore();
        getline(cin,code);
        cout<<"Enter title of course "<<i+1<<" : ";
        getline(cin,title);
        cout<<"Enter credits of course "<<i+1<<" : ";
        cin>>cr_hours;
        c.setCode(code);
        c.setTitle(title);
        c.setCreditHours(cr_hours);
        s.setcourse(c,i);
    }

    cout<<"Roll no : "<<s.getrollno()<<endl;
    cout<<"Name    : "<<s.getname()<<endl;
    cout<<"Credits : "<<s.getCrHours()<<endl;
    for(int  i = 0; i<3; i++)
    {
        cout<<"Details of course "<<i+1<<" is "<<endl;
        cout<<"Code : "<<s.getcourse(i).getCode()<<endl;
        cout<<"Title : "<<s.getcourse(i).getTitle()<<endl;
        cout<<"Credits : "<<s.getcourse(i).getCreditHours()<<endl;
    }
}