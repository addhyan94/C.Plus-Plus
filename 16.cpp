// WAP to to create a class retangle to find a area of three different size of rectangle .
#include <iostream>
using namespace std;

class retangle
{
    int length , breadth;
    public:
    void getdata()
    {
        cout<<"\nEnter the Length =";
        cin>>length;
        cout<<"Enter the Breadth =";
        cin>>breadth;
    }
    void area()
    {
        int a;
        a=length*breadth;
        cout<<"\nArea of Rectangle ="<<a;
    }
};
int main() 
{
    retangle r1,r2,r3;
    r1.getdata();
    r1.area();
    r2.getdata();
    r2.area();
    r3.getdata();
    r3.area();
    return 0;
}

/*Output-

Enter the Length =2
Enter the Breadth =3
Area of Rectangle =6

Enter the Length =12
Enter the Breadth =3
Area of Rectangle =36

Enter the Length =14
Enter the Breadth =2
Area of Rectangle =28

*/