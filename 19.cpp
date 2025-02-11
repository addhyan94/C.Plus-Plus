// WAP to enter the record of 5 students and calculate the result of students and display it.
#include<iostream>
using namespace std;
class student
{
    public:
    int roll_no, total,marks[5];
    string name;
    float per;
    void getdata()
    {
        cout<<"\nEnter the roll number of student: ";
        cin>>roll_no;
        cout<<"Enter the name of student: ";
        cin>>name;
        
        for(int i=1;i<=5;i++)
        {
            cout<<"Enter the marks of subjects:"<<i<<":";
            cin>>marks[i];
        }
    }
    void calculate()
    {
        total=0;
        for(int i=1;i<=5;i++)
        {
            total=total+marks[i];
        }
        per=total/5;
    }
    void display()
    {
        cout<<"\nRoll number of student: "<<roll_no;
        cout<<"\nName of student: "<<name;
        cout<<"\nTotal marks of student: "<<total;
        cout<<"\nPercentage of student: "<<per;
    }
};
int main()
{
    student s[5];
    for(int i=1;i<=5;i++)
    {
        s[i].getdata();
        s[i].calculate();
        s[i].display();
    }
    return 0;
}