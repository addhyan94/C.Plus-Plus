// Wap to create a class student which contain the record of 5 student display the result of all the students toppers source first.
#include <iostream>
using namespace std;

class Student 
{
    public:
    int roll_no, marks;
    string name;

    void getdata() 
    {
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() 
    {
        cout << "Roll No: " << roll_no << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() 
{
    Student s[5], temp;
    
    for (int i = 0; i < 5; i++) 
    {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        s[i].getdata();
    }
    
    for (int i = 0; i < 4; i++)
     {
        for (int j = i + 1; j < 5; j++) 
        {
            if (s[i].marks < s[j].marks) 
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    
    cout << "\nStudent Results (Topper First):\n";
    for (int i = 0; i < 5; i++)
     {
        s[i].display();
    }
    return 0;
}

/* Output ~
Enter details for Student 1:
Enter Roll No: 101
Enter Name: Raj
Enter Marks: 85

Enter details for Student 2:
Enter Roll No: 102
Enter Name: Aman
Enter Marks: 90

Enter details for Student 3:
Enter Roll No: 103
Enter Name: Simran
Enter Marks: 78

Enter details for Student 4:
Enter Roll No: 104
Enter Name: Priya
Enter Marks: 95

Enter details for Student 5:
Enter Roll No: 105
Enter Name: Rohit
Enter Marks: 88

Student Results (Topper First):
Roll No: 104, Name: Priya, Marks: 95
Roll No: 102, Name: Aman, Marks: 90
Roll No: 105, Name: Rohit, Marks: 88
Roll No: 101, Name: Raj, Marks: 85
Roll No: 103, Name: Simran, Marks: 78

*/