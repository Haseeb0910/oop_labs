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

int main()
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
