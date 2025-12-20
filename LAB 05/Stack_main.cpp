#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

// task 2 (c)
bool search(char target, Stack &s)
{
   Stack temp;
   bool r = false;
   while (!s.isEmpty())
   {
      char tempchar = s.top();
      if (tempchar == target)
      {
         r = true;
      }
      temp.push(s.pop());
   }

   while (!temp.isEmpty())
   {
      s.push(temp.pop());
   }
   return r;
}

int main()
{
   Stack S1;
   string p;
   S1.push('[');
   S1.push('{');
   S1.push('a');
   S1.push('+');
   S1.push('b');
   S1.push('}');
   S1.push('+');
   S1.push('(');
   S1.push('c');
   S1.push('+');
   S1.push('d');
   S1.push(')');
   S1.push(']');
   cout << (S1.isValid() ? "Valid Expression" : "Invalid Expression ") << endl;
   cout << "Enter a string : ";
   cin >> p;
   cout << (S1.ispalindrome(p) ? "Palindrome" : "Not Palindrome") << endl;
   char target = '}';
   cout << (search(target, S1) ? "Target Found " : "Target Not Found") << endl;
}
