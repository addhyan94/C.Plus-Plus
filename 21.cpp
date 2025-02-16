// Using InLine Function .....
#include<iostream>
using namespace std;
class Demo
{
    int a;
    static int b;
    public:
    void getdata()
    {
        cout<<"Enter the value of a=";
        cin>>a;
    }
    void display()
    {
        cout<<"\nValue of a="<<a;
        cout<<"\n Value of b="<<b;
    }
    void in()
    {
        a++;
        b++;
    }
    static void show()
    {
        cout<<"\n Value of b="<<b;
    }
};

int Demo::b=10;
int main()
{
 Demo D;
 D.getdata();
    D.display();
    D.in();
    D.display();
    D.in();
    D.display();
    Demo::show();
    return 0;
}