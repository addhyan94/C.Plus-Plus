// Write a C++ program to check whether an expression has balanced brackets using stack.

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string expr;
    stack<char> s;

    cout << "Enter expression: ";
    cin >> expr;

    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[')
            s.push(ch);
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) {
                cout << "Not Balanced ❌\n";
                return 0;
            }

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                cout << "Not Balanced ❌\n";
                return 0;
            }
        }
    }

    if (s.empty())
        cout << "Balanced ✅\n";
    else
        cout << "Not Balanced ❌\n";

    return 0;
}
