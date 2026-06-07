#include<iostream>
using namespace std;
int main()
{
    int val1 = 2300;
    int val2;
    cout <<"Address of Val1: " << &val1 << endl;
    cout <<"Address of Val2: " << &val2 << endl;
    int* myPointer;
    cout <<"Size of pointer in bytes: "<< sizeof(myPointer) << endl;
    myPointer = &val1;
    cout <<"Value of the object pointed to by myPointer: "<< *myPointer << endl;
    val2 = *myPointer;
    cout << "Value of val2: " << val2 << endl;
    cout <<"Address stored in myPointer: " << myPointer << endl;
    cout <<"Value of myPointer pointed to: " << *myPointer << endl;
    myPointer = NULL;
    cout << "Value of myPointer pointed to: " <<  *myPointer << endl;
}