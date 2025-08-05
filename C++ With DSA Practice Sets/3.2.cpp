// Write a C++ program to reverse a string using stack (without using STL). with class

#include <iostream>
#include <string>
using namespace std;

class Stack {
    char arr[100]; 
    int top;

public:
    Stack() {
        top = -1; 
    }

    void push(char ch) {
        top++;
        arr[top] = ch;
    }

    char pop() {
        char ch = arr[top];
        top--;
        return ch;
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s;
    string str;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    // reverse
    cout << "Reversed string: ";
    while (!s.isEmpty()) {
        cout << s.pop();
    }

    return 0;
}
