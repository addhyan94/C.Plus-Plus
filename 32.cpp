// Wap to copy one string to another string using assignment operator.
#include <iostream>
#include <string.h>
using namespace std;

class stringcopy
{
    char str1[20],str2[20];
    public:
    void getdata()
    {
        cout<<"Enter the string=";
        cin>>str1;
    }
    void display()
    {
        cout<<"\nString="<<str1;
    }
    void copy()
    {
        strcpy(str2,str1);
        cout<<"\nCopied string="<<str2;
    }
};

int main()
{
    stringcopy s;
    s.getdata();
    s.display();
    s.copy();
    return 0;
}

/* Output ~
Enter the string=Ankit
String=Ankit
Copied string=Ankit
*/