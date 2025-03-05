// Wap to create a class and check number is armstrong or not .
#include <iostream>
#include <math.h>
using namespace std;

class armstrong
{
    int num;
    public:
    void getdata()
    {
        cout<<"Enter the number=";
        cin>>num;
    }
    void display()
    {
        cout<<"\nNumber="<<num;
    }
    void check()
    {
        int n=num;
        int sum=0;
        while(n>0)
        {
            int rem=n%10;
            sum=sum+pow(rem,3);
            n=n/10;
        }
        if(sum==num)
        {
            cout<<"\nNumber is armstrong";
        }
        else
        {
            cout<<"\nNumber is not armstrong";
        }
    }
};

int main()
{
    armstrong a;
    a.getdata();
    a.display();
    a.check();
    return 0;
}

/* Output ~
Enter the number=153
Number=153
Number is armstrong*/