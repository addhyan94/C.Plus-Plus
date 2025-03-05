// Wap to add two number of two different class.
#include <iostream>
using namespace std;

class A
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
    friend class B;
};

class B
{
    int b;
    public:
    void getdata()
    {
        cout<<"Enter the value of b=";
        cin>>b;
    }
    void display()
    {
        cout<<"\nValue of b="<<b;
    }
    void add(A &ob1,B &ob2)
    {
        cout<<"\nSum of a and b="<<ob1.a+ob2.b;
    }
};

int main()
{
    A a;
    B b;
    a.getdata();
    b.getdata();
    a.display();
    b.display();
    b.add(a,b);
    return 0;
}

/* Output ~
Enter the value of a=10
Enter the value of b=20
Value of a=10
Value of b=20
Sum of a and b=30
*/
