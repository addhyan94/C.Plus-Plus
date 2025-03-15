// Wap to create a class calculator which perform all the arithmetic operation on object using overloading the operators.
#include <iostream>
using namespace std;

class calculator
{
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter the value of a and b=";
        cin>>a>>b;
    }
    void display()
    {
        cout<<"\nValue of a="<<a;
        cout<<"\nValue of b="<<b;
    }
    calculator operator +(calculator c)
    {
        calculator temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    calculator operator -(calculator c)
    {
        calculator temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return temp;
    }
    calculator operator *(calculator c)
    {
        calculator temp;
        temp.a=a*c.a;
        temp.b=b*c.b;
        return temp;
    }
    calculator operator /(calculator c)
    {
        calculator temp;
        temp.a=a/c.a;
        temp.b=b/c.b;
        return temp;
    }
};

int main()
{
    calculator c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.display();
    c3=c1-c2;
    c3.display();
    c3=c1*c2;
    c3.display();
    c3=c1/c2;
    c3.display();
    return 0;
}

/*Output ~
Enter the value of a and b=10 20
Enter the value of a and b=5 10
Value of a=15
Value of b=30
Value of a=5
Value of b=10
Value of a=50
Value of b=200
Value of a=2
Value of b=2*/