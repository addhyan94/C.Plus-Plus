// WAP to create a class cirle to find a area of circle .
#include <iostream>
using namespace std;
class circle
 {
    int radius;
public:
    void getdata() 
{
        cout <<"Enter the Radius =";
        cin>>radius;
    }
    void area()
    {
        float a;
        a=3.14*radius*radius;
        cout<<"\n Area Of Circle ="<<a;
    }
};

int main()
{
    circle C;
    C.getdata();
    C.area();
    return 0;
}

/*Output -
Enter the Radius =5
 Area Of Circle =78.5
*/