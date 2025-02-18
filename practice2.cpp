//  constants in c++ .
#include<iostream>
using namespace std;
int main()
{
    const int a = 20;
    cout<<"The value of A was :"<<a<<endl;
    // a=30;
    // ek baar a naam ki variable ko constant declare karne ke baad uski value change nahi kar sakte.
    cout<<"The value of A is :"<<a;
    return 0;
    
}

// constants ek aise variables hote hai jinki value change nahi hoti hai. or ek baar constant declare karne per per ushe mane bale value ko change nahi kar sakte.
// constants ko declare karne ke liye hume uske aage const keyword use karna hota hai.

/*output-
The value of A was :20
The value of A is :20
*/