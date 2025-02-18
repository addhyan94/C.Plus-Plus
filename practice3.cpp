//  Mainpulators in c++.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a =5, b=55, c=555, d=5555;
    cout<<"The value of Without setw is :"<<a<<endl;
    cout<<"The value of Without setw is :"<<b<<endl;
    cout<<"The value of Without setw is :"<<c<<endl;
    cout<<"The value of Without setw is :"<<d<<endl;
    cout<<"The value of setw is :"<<setw(4)<<a<<endl;
    cout<<"The value of setw is :"<<setw(4)<<b<<endl;
    cout<<"The value of setw is :"<<setw(4)<<c<<endl;
    cout<<"The value of setw is :"<<setw(4)<<d<<endl;
    return 0;
}
// setw function ek manipulator hai jo ki setw(4) ke andar jo bhi value hogi uske baad jitne bhi values print hogi unka width 4 hoga. , setw(4) ki jage kuch bhi likh sakye hai matlab koi sa bhi number likh sakte hai . 

/*Output -
The value of Without setw is :5
The value of Without setw is :55
The value of Without setw is :555
The value of Without setw is :5555
The value of setw is :   5
The value of setw is :  55
The value of setw is : 555
The value of setw is :5555

*/