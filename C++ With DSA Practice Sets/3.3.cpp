// Write a C++ program to reverse a string using stack (with using STL).

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> s;
    string str;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    // reversed string
    cout << "Reversed string: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}
