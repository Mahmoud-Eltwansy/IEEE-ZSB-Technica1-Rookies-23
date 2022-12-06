// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']',
// determine if the input string is valid.
// An input string is valid if:
// • Open brackets must be closed by the same type of brackets.
// • Open brackets must be closed in the correct order.
// • Every close bracket has a corresponding open bracket of the same type.

#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isValid(string str)
{
    stack<char> s;
    int n = str.size(), i = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else if (str[i] == ')' && !s.empty() && s.top() == '(')
        {
            s.pop();
        }
        else if (str[i] == '}' && !s.empty() && s.top() == '{')
        {
            s.pop();
        }
        else if (str[i] == ']' && !s.empty() && s.top() == '[')
        {
            s.pop();
        }
        else
            return false;
    }
    return s.empty();
}
int main()
{
    string str;
    cin >> str;
    cout << isValid(str);
}