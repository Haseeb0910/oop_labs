#include "Stack.h"
#include <string>
using namespace std;

Stack::Stack() : n(0)
{
}

bool Stack::isEmpty() const
{
    return this->n == 0;
}

bool Stack::isFull() const
{
    return this->n == 100;
}

int Stack::size() const
{
    return this->n;
}

char Stack::top() const
{
    if (this->size() > 0)
    {
        return this->s[n - 1];
    }
    else
    {
        throw string("Empty");
    }
}

void Stack::push(char item)
{
    if (this->size() < 100)
    {
        this->s[this->n] = item;
        this->n += 1;
    }
    else
    {
        throw string("Full");
    }
}
char Stack::pop()
{
    char item = this->top();
    this->n -= 1;
    return item;
}

// Task 2 (a)
bool Stack::isValid()
{
    Stack s1;
    int i = 0;
    while (i < this->size())
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            s1.push(s[i]);
        }
        else if (s[i] == '}')
        {
            if (s1.pop() != '{')
            {
                return false;
            }
        }
        else if (s[i] == ')')
        {
            if (s1.pop() != '(')
            {
                return false;
            }
        }
        else if (s[i] == ']')
        {
            if (s1.pop() != '[')
            {
                return false;
            }
        }
        i++;
    }
    if (s1.isEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Task 2(b)
bool Stack::ispalindrome(string s)
{
    Stack S2;
    int in_size = s.length() / 2;
    int fn_size = s.length();
    for (int i = 0; i < in_size; i++)
    {
        S2.push(s[i]);
    }
    if (fn_size % 2 != 0)
    {
        in_size += 1;
    }
    for (int i = in_size; i < fn_size; i++)
    {
        if (S2.pop() != s[i])
        {
            return false;
        }
    }
    return S2.isEmpty();
}

string Stack::reverse(string s)
{
    Stack st;
    string rev;
    for(int i =0; i < s.length(); i++)
    {
       st.push(s[i]);   
    }
    for(int i =0; i < s.length(); i++)
    {
       rev += st.pop(); 
    }
    return rev;
}

string Stack::remove_dup(string s)
{
    Stack st;
    Stack rem;
    string New;
    rem.push(s[0]);
    int count = 1;
    for(int i = 1; i< s.length(); i++)
    {
        if(s[i] != s[i-1])
        {
            rem.push(s[i]);
            count++;
        }
    }
    for(int i = 0; i<count; i++)
    {
      New += rem.pop();
    }
    string Updated = reverse(New);
    return Updated;
}
