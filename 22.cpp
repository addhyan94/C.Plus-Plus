// Constructors 
#include<iostream>
using namespace std;

class number
{
    int a=0;
    public:
//    void numbrt()
//     {
//         a=200;
//     }
    int numbrtp()
    {
        a++;
    }
    int display1()
    {
        cout<<"\n~check the value of a (Uper bala hai)= "<<a;
    }
    int numbrtp(int s)
    {
        a=s;
    }
    int display()
    {
        cout<<"\n~check the value of a (Neeche bala hai ) = "<<a;
    }
    
};

int main()
{
    number n,m;
    n.numbrtp();
    n.display1();
    m.numbrtp(10);
    m.display();
    m.display1();
    number o;
    o.display();
    o.display1();
    o.numbrtp(100);
    o.display();
    o.display1();
    return (0);
}

/*Output ~

~check the value of a (Uper bala hai)= 1
~check the value of a (Neeche bala hai ) = 10
~check the value of a (Uper bala hai)= 10
~check the value of a (Neeche bala hai ) = 0
~check the value of a (Uper bala hai)= 0
~check the value of a (Neeche bala hai ) = 100
~check the value of a (Uper bala hai)= 100
*/