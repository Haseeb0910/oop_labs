#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    string dept;
    int scale;

    void setname(string n)
    {
        name = n;
    }
    void setdept(string d)
    {
        dept = d;
    }
    void setscale(int s)
    {
        scale = s;
    }
    string getname()
    {
        return name;
    }
    string getdept()
    {
        return dept;
    }
    int getscale()
    {
        return scale;
    }
};

class Officer : public Employee
{
public:
    int m_salary;

    int take_home_income()
    {
        int final_salary = m_salary * 0.90;
        return final_salary;
    }

    void setsalary(int salary)
    {
        m_salary = salary;
    }
    int getsalary()
    {
        return m_salary;
    }
};

class Daily_wager : public Employee
{
public:
    int daily_wage;
    int absent_count;

    int take_home_income()
    {
        int present_count = 30 - absent_count;
        int final_wage = daily_wage * present_count;
        return final_wage;
    }

    void setwage(int d_wage)
    {
        daily_wage = d_wage;
    }
    void setabsent(int count)
    {
        absent_count = count;
    }
    int getwage()
    {
        return daily_wage;
    }
    int getabsent()
    {
        return absent_count;
    }
};

int main()
{
    Officer o;
    o.setname("Huzaifa");
    o.setdept("Pharmacy");
    o.setscale(17);
    o.setsalary(90000);

    cout << "Name: " << o.getname() << endl;
    cout << "Dept: " << o.getdept() << endl;
    cout << "Scale: " << o.getscale() << endl;
    cout << "Salary: " << o.take_home_income() << endl << endl;
    
    Daily_wager d;
    d.setname("Abdullah");
    d.setdept("Mason");
    d.setscale(7);
    d.setwage(900);
    d.setabsent(2);
    cout << "Name: " << d.getname() << endl;
    cout << "Dept: " << d.getdept() << endl;
    cout << "Scale: " << d.getscale() << endl;
    cout << "Wage: " << d.take_home_income() << endl;
}