// WAP to input a number and one variable make static data member and other non-static and display the value of both variables.
#include <iostream>
using namespace std;
class Demo
{
    int a,b;
    static int c;
    public:
    void getdata()
    {
        cout<<"Enter the value of a=";
        cin>>a;
        cout<<"Enter the value of b=";
        cin>>b;  
    }
    void display()
    {
        cout<<"\nValue of a="<<a;
        cout<<"\n Value of b="<<b;
        cout<<"\n Value of c="<<c;
    }
    void in()
    {
        a++;
        b++;
        c++;
    }
};
int Demo::c=10;
int main()
{
 Demo D;
 D.getdata();
    D.display();
    D.in();
    D.display();
    D.in();
    D.display();
    return 0;
}