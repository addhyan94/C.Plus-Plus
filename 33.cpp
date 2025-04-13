// Wap to concatenate two strings using + operator.
#include <iostream>
#include <cstring>  
using namespace std;

class Concat {
    char str[50];

public:
    void getdata() {
        cout << "Enter string: ";
        cin >> str;
    }

    Concat operator+(Concat s) {
        Concat temp;  
        strcpy(temp.str, str);  
        strcat(temp.str, s.str); 
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    Concat s1, s2, s3;

    s1.getdata();
    s2.getdata();

    s3 = s1 + s2;  

    cout << "Concatenated String: ";
    s3.display();

    return 0;
}
/* Output ~
Enter the first string=Ankit
Enter the second string=Kumar
First string=Ankit
Second string=Kumar
Concatenated string=AnkitKumar
*/

/*
#include <iostream>
#include <string.h>
using namespace std;

class stringconcat
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
    void concat()
    {
        strcat(str1,str2);
        cout<<"\nConcatenated string="<<str1;
    }
};

int main()
{
    stringconcat s;
    s.getdata();
    s.display();
    s.concat();
    return 0;
}
*/
