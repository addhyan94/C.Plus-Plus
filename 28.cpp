// Wap to create a class complex to represent the complex number.
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
};

int main()
{
    complex c;
    c.getdata();
    c.display();
    return 0;
}

/* Output ~
Enter the real part=10
Enter the imaginary part=20
Real part=10
Imaginary part=20
*/