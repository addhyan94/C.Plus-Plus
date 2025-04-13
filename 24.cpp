// Wap to create a class ABC which contain A as a private data and create a another class XYZ which contain X as a private data , find which class is greater.
#include <iostream>
using namespace std;

class ABC
{
    int A;
    public:
    void getdata()
    {
        cout<<"Enter the value of A=";
        cin>>A;
    }
    void display()
    {
        cout<<"\nValue of A="<<A;
    }
    friend class XYZ;
};

class XYZ
{
    int X;
    public:
    void getdata()
    {
        cout<<"Enter the value of X=";
        cin>>X;
    }
    void display()
    {
        cout<<"\nValue of X="<<X;
    }
    void compare(ABC &ob1)
    {
        if (X > ob1.A) 
        {
            cout << "\nValue of X is greater than A";
        }
         else if (X < ob1.A) 
         {
            cout << "\nValue of A is greater than X";
        }
         else 
         {
            cout << "\nBoth values are equal";
        }
    }
};

int main()
{
    ABC A;
    XYZ X;
    A.getdata();
    X.getdata();
    A.display();
    X.display();
    X.compare(A);
    return 0;
}

/* Output ~
 Enter the value of A=10
 Enter the value of X=20
 Value of A=10
 Value of X=20
 Value of X is greater than A*/