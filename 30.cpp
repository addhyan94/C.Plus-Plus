// Wap to add two complex number using friend function.
#include <iostream>
using namespace std;

class complex
{
    int real,imag;
    public:
    void getdata()
    {
        cout<<"Enter the real part=";
        cin>>real;
        cout<<"Enter the imaginary part=";
        cin>>imag;
    }
    void display()
    {
        cout<<"\nReal part="<<real;
        cout<<"\nImaginary part="<<imag;
    }
    friend complex add(complex,complex);
};

complex add(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=add(c1,c2);
    c3.display();
    return 0;
}

/* Output ~
Enter the real part=10
Enter the imaginary part=20
Enter the real part=30
Enter the imaginary part=40
Real part=40
Imaginary part=60
*/
