//  inheritance 
/*Types of Inheritance in C++:
Single Inheritance: Ek derived class ek base class se inherit karti hai.
Multiple Inheritance: Ek derived class multiple base classes se inherit karti hai.
Multilevel Inheritance: Ek class ek base class se inherit karti hai, aur phir ek aur class us derived class se inherit karti hai.
Hierarchical Inheritance: Ek base class se multiple derived classes inherit karti hain.
Hybrid Inheritance: Combination of multiple and multilevel inheritance.*/
// -------------------------------------------------------------------------------------->

// Single  inheritance 
#include <iostream>
using namespace std;

// Parent Class
class Parent {
public:
    void car() {
        cout << "Parent ke paas car hai." << endl;
    }
};

// Child Class
class Child : public Parent {
public:
    void bike() {
        cout << "Child ke paas bike hai." << endl;
    }
};

int main() {
    Child obj;
    obj.car();  // Parent ki car use kar raha hai
    obj.bike(); // Apni bike use kar raha hai
    return 0;
}

// Multiple Inheritance:
