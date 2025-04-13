// Wap to copy one string to another string using assignment ( = ) operator .
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
  
    void operator =(stringcopy temp){   // (stringcopy temp) class ka object .......
        strcpy(str1,temp.str1);
    }
};



int main()
{
    stringcopy s;
    s.getdata();

    stringcopy s2;
    s2 = s;
    s2.display();
    return 0;
}

/* Output ~
Enter the string=Ankit
String=Ankit
Copied string=Ankit
*/