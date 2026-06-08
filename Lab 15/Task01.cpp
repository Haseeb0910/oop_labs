#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream file;
  file.open("fellows1.txt", ios::app);
  string name, roll_no;
  float cgpa;
  string choice;
  do
  {
    cout << "Enter Roll no: ";
    getline(cin, roll_no);
    cout << "Enter Full name: ";
    getline(cin, name);
    cout << "Enter CGPA: ";
    cin >> cgpa;
    cin.ignore();
    file << roll_no << ", " << name << ", " << cgpa << endl;
    cout << "Do you want to enter more data(yes/no): ";
    cin >> choice;
    cin.ignore();
  } while (choice == "yes");

  file.close();
  cout << "Data written to file successfully" << endl;
  return 0;
}