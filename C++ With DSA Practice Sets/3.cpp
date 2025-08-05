// Write a C++ program to reverse a string using stack (without using STL).

#include <iostream>
#include <string>
using namespace std;
#define SIZE 100

class Stack {
    char arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(char ch) {
        if (top < SIZE - 1) {
            top++;
            arr[top] = ch;
        }
    }

    char pop() {
        if (top >= 0) {
            return arr[top--];
        }
        return '\0'; // empty stack
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s;
    string str;

    cout << "Enter a string : ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    // reverse
    cout << "Reversed string: ";
    while (!s.isEmpty()) {
        cout << s.pop();
    }

    cout << endl;
    return 0;
}