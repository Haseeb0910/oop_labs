#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int RECORD_SIZE = 30;
    fstream src("fellows2.txt");
    fstream dst("fellows3.txt");
    if (!src || !dst)
    {
        cout << "Error opening files for copying." << endl;
        return 1;
    }
    char ch;
    while (src.get(ch))
    {
        dst.put(ch);
    }
    src.close();
    dst.close();
    cout << "Copied fellows2.txt to fellows3.txt successfully." << endl;
    fstream file("fellows2.txt", ios::in | ios::out | ios::ate);
    if (!file)
    {
        cout << "Error opening fellows2.txt for update." << endl;
        return 1;
    }
    int fileSize = file.tellp();
    int totalRecords = fileSize / RECORD_SIZE;
    if (totalRecords < 2)
    {
        cout << "Not enough records to update." << endl;
        return 1;
    }
    int secondLastPos = (totalRecords - 2) * RECORD_SIZE;
    file.seekp(secondLastPos);
    string roll = "BCDF99H999 ";
    string name = "Bara Admi     ";
    string cgpa = " 4.00";
    file << roll << name << cgpa;
    file.close();
    cout << "Second last record updated successfully in fellows2.txt." << endl;
    return 0;
}
