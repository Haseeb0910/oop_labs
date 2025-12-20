#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main()
{
    Stack s;
    cout << s.reverse("haseeb") << endl;
    cout<<s.remove_dup("aaaabbbccdddfff");
}