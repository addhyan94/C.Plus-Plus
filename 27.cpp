// Wap to create a class rectangle to find the area and perimeter of rectangle.
#include <iostream>
using namespace std;

class rectangle
{
    int length,breadth;
    public:
    void getdata()
    {
        cout<<"Enter the length=";
        cin>>length;
        cout<<"Enter the breadth=";
        cin>>breadth;
    }
    void display()
    {
        cout<<"\nLength="<<length;
        cout<<"\nBreadth="<<breadth;
    }
    void area()
    {
        cout<<"\nArea of rectangle="<<length*breadth;
    }
    void perimeter()
    {
        cout<<"\nPerimeter of rectangle="<<2*(length+breadth);
    }
};

int main()
{
    rectangle r;
    r.getdata();
    r.display();
    r.area();
    r.perimeter();
    return 0;
}

/* Output ~
Enter the length=10
Enter the breadth=20
Length=10
Breadth=20
Area of rectangle=200
Perimeter of rectangle=60
*/