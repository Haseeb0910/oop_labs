#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int RECORD_SIZE = 30;
    fstream file("fellows2.txt");
    char buffer[RECORD_SIZE + 1];
    buffer[RECORD_SIZE] = '\0';
    int count = 1;
    while (file.read(buffer, RECORD_SIZE)) {
        cout << count << " ";
        for (int i = 11; i < 25; i++) cout << buffer[i];
        cout << ", ";
        for (int i = 0; i < 11; i++) cout << buffer[i];
        cout << "\nCGPA: ";
        for (int i = 25; i < 30; i++) cout << buffer[i];
        cout << "\n";
        count++;
    }
    file.close();
    return 0;
}
