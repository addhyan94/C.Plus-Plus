// Wap to compare two strings using equal operator.
#include <iostream>
#include <string.h>
using namespace std;

class stringcompare
{
    
    char str1[20],str2[20];
    public:
    void getdata()
    {
        cout<<"Enter the first string=";
        cin>>str1;
        cout<<"Enter the second string=";
        cin>>str2;
    }
    void display()
    {
        cout<<"\nFirst string="<<str1;
        cout<<"\nSecond string="<<str2;
    }
    void compare()
    {
        if(strcmp(str1,str2)==0)
        {
            cout<<"\nBoth strings are equal";
        }
        else
        {
            cout<<"\nBoth strings are not equal";
        }
    }
};

int main()
{
    stringcompare s;
    s.getdata();
    s.display();
    s.compare();
    return 0;
}

/* Output ~
Enter the first string=Ankit
Enter the second string=Ankit
First string=Ankit
Second string=Ankit
Both strings are equal
*/