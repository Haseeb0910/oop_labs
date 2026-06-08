#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
  fstream file;
  file.open("fellows2.txt", ios::out);

  string name, roll_no;
  float cgpa;
  string choice;

  do
  {
    cout << "Enter Roll no (max 11 chars): ";
    getline(cin, roll_no);
    roll_no.resize(11, ' ');

    cout << "Enter Full name (max 14 chars): ";
    getline(cin, name);
    name.resize(14, ' ');

    cout << "Enter CGPA: ";
    cin >> cgpa;
    cin.ignore();

    file << left << roll_no
         << left << name
         << right << setw(5) << fixed << setprecision(2) << cgpa;

    cout << "Do you want to enter more data (yes/no): ";
    cin >> choice;
    cin.ignore();
  } while (choice == "yes");

  file.close();
  cout << "Data written to file successfully." << endl;
  return 0;
}
