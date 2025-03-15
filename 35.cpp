// Wap to overload unary minus operator.
#include <iostream>
using namespace std;

class unary
{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter the value of a=";
        cin>>a;
    }
    void display()
    {
        cout<<"\nValue of a="<<a;
    }
    void operator -()
    {
        a=-a;
    }
};

int main()
{
    unary u;
    u.getdata();
    u.display();
    -u;
    u.display();
    return 0;
}

/* Output ~
Enter the value of a=10
Value of a=10
Value of a=-10
*/