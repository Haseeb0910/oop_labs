#ifndef stack_H
#define stack_H

#include <string>
using namespace std;

class Stack
{
private:
    char s[100];
    int n;

public:
    Stack();
    bool isEmpty() const;
    bool isFull() const;
    int size() const;
    char top() const;
    void push(char);
    char pop();

    // Task 2 (a)
    bool isValid();

    // Task 02 (b)
    bool ispalindrome(string s);
    string reverse(string s);
    string remove_dup(string s);
};

#endif