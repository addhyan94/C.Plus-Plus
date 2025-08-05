// Write a C++ program to reverse a string using stack (without using Class & STL). 

#include <iostream>
#include <string>
using namespace std;

int main() {
    char stack[100]; 
    int top = -1;
    string str;

    cout << "Enter a string: ";
    cin >> str;

    //input stack
    for (int i = 0; i < str.length(); i++) {
        stack[++top] = str[i];
    }

    // reversed string
    cout << "Reversed string: ";
    while (top >= 0) {
        cout << stack[top--];
    }

    return 0;
}
