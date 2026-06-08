#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("fellows2.txt");  

    const int RECORD_SIZE = 30; 
    int record_number;

    cout << "Enter record number: ";
    cin >> record_number;

    
    file.seekg((record_number - 1) * RECORD_SIZE);

    char record[RECORD_SIZE + 1];  
    file.read(record, RECORD_SIZE);
    record[RECORD_SIZE] = '\0';    

   
    string roll = string(record).substr(0, 11);
    string name = string(record).substr(11, 14);
    string cgpa = string(record).substr(25, 5);

    
    cout << "\nRecord #" << record_number << endl;
    cout << "Roll Number: " << roll << endl;
    cout << "Name      : " << name << endl;
    cout << "CGPA      : " << cgpa << endl;

    file.close();
    return 0;
}
