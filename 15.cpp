// WAP to input a integer , decimal , character , string Types value using defrent input function.
#include<iostream>
using namespace std;

int main()
{
    int a;
    float b;
    char c;
    string d;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter a decimal: ";
    cin >> b;
    cout << "Enter a character: ";
    cin >> c;
    cout << "Enter a string: ";
    cin >> d;
    cout << "\nThe integer is: " << a;
    cout << "\nThe decimal is: " << b;
    cout << "\nThe character is: " <<c;
    cout << "\nThe string is: " << d;
    return 0;
}