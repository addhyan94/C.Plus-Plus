// Wap to create a class student which contain the record of 5 student display the result of all the students toppers source first.
#include <iostream>
using namespace std;

class student
{
    int roll;
    char name[20];
    float marks;
    public:
    void getdata()
    {
        cout<<"Enter the roll number=";
        cin>>roll;
        cout<<"Enter the name=";
        cin>>name;
        cout<<"Enter the marks=";
        cin>>marks;
    }
    void display()
    {
        cout<<"\nRoll number="<<roll;
        cout<<"\nName="<<name;
        cout<<"\nMarks="<<marks;
    }
};

int main()
{
    student s[5];
    for(int i=0;i<5;i++)
    {
        s[i].getdata();
    }
    for(int i=0;i<5;i++)
    {
        s[i].display();
    }
    return 0;
}

/* Output ~
Enter the roll number=1
Enter the name=Ankit
Enter the marks=90
Enter the roll number=2
Enter the name=Ankush
Enter the marks=80
Enter the roll number=3
Enter the name=Anshul
Enter the marks=70
and so on...............
Roll number=1
Name=Ankit
Marks=90
Roll number=2
Name=Ankush
Marks=80
Roll number=3
Name=Anshul
Marks=70   
and so on...............
*/