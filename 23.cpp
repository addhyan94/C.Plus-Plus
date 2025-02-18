// Construction 

#include<iostream>
using namespace std;

class demo
{
int a,b;
public:
 demo()
 {
 a=0;
 b=2;
 }
 demo(int x , int y)
 {
 a=x;
 b=y;
 }
 demo (demo &ob)
 {
 a=ob.a;
 b=ob.b;
 }
 void display()
 {
 cout<<"a= "<<a<<"b="<<b<<endl;
 }
};
int main()
{
    demo d1,d2;
    demo d3(3,4);
    demo d4(d3);
    
    d1.display();
    d2.display();
    d3.display();
    d4.display();
    return 0;
}