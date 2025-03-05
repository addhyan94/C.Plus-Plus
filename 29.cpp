/*Wap to create a class employee which contain the information of employee like employee name, I'd and salary calculate the bonus of the employee basis on the following conditions -
1- if salary <=30000 then the bonus is 20% of the salary 
2- if salary>30000 and <= 50000 then the bonus is 15% of the salary 
3- if salary is >50000 then bonus is 10% of the salary display the data of 5 employee*/
#include <iostream>
using namespace std;

class employee
{
    char name[20];
    int id;
    float salary;
    float bonus;
    public:
    void getdata()
    {
        cout<<"Enter the name=";
        cin>>name;
        cout<<"Enter the id=";
        cin>>id;
        cout<<"Enter the salary=";
        cin>>salary;
    }
    void display()
    {
        cout<<"\nName="<<name;
        cout<<"\nId="<<id;
        cout<<"\nSalary="<<salary;
        if(salary<=30000)
        {
            bonus=0.2*salary;
            cout<<"\nBonus="<<bonus;
        }
        else if(salary>30000 && salary<=50000)
        {
            bonus=0.15*salary;
            cout<<"\nBonus="<<bonus;
        }
        else
        {
            bonus=0.1*salary;
            cout<<"\nBonus="<<bonus;
        }
    }
};

int main()
{
    employee e[5];
    for(int i=0;i<5;i++)
    {
        e[i].getdata();
    }
    for(int i=0;i<5;i++)
    {
        e[i].display();
    }
    return 0;
}

/* Output ~
Enter the name=Ankit
Enter the id=1
Enter the salary=25000
Enter the name=Ankush
Enter the id=2
Enter the salary=35000
Enter the name=Anshul
Enter the id=3
Enter the salary=45000
Enter the name=Ansh
and soo on.............

Id=1
Salary=25000
Bonus=5000
Name=Ankush
Id=2
Salary=35000
Bonus=5250
Name=Anshul
Id=3
Salary=45000
Bonus=6750
Name=Ansh
and so on......*/