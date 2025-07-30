// Count number of even and odd elements in an array. 

#include <iostream>
using namespace std;
#define size 100
class check {
int ar[size];
int top;
public:
    check(){
        top = -1;
    }
    void push(){
           
    }
    void pop(){
        if (top==-1)
        {
            cout<<"\n Stack khalii hai kuch ni hai isme..... ( Underflow ) ";
        }
    }
    
};

int main()
{
    check obj;
    return 0;
}