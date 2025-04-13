/*Wap to create a class employee which contain the information of employee like employee name, I'd and salary calculate the bonus of the employee basis on the following conditions -
1- if salary <=30000 then the bonus is 20% of the salary 
2- if salary>30000 and <= 50000 then the bonus is 15% of the salary 
3- if salary is >50000 then bonus is 10% of the salary display the data of 5 employee*/
#include <iostream>
using namespace std;

class Employee {
    string name;
    int id;
    float salary, bonus;
    
    public:
    void getdata() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    
    void calculateBonus() {
        if (salary <= 30000)
            bonus = salary * 0.20;
        else if (salary > 30000 && salary <= 50000)
            bonus = salary * 0.15;
        else
            bonus = salary * 0.10;
    }
    
    void display() {
        cout << "\nEmployee ID: " << id;
        cout << "\nEmployee Name: " << name;
        cout << "\nSalary: " << salary;
        cout << "\nBonus: " << bonus << "\n";
    }
};

int main() {
    Employee e[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        e[i].getdata();
        e[i].calculateBonus();
    }
    
    cout << "\nEmployee Details with Bonus:\n";
    for (int i = 0; i < 5; i++) {
        e[i].display();
    }
    
    return 0;
}


/* Output ~
Enter details for Employee 1:
Enter Employee ID: 101
Enter Employee Name: Raj
Enter Salary: 25000

Enter details for Employee 2:
Enter Employee ID: 102
Enter Employee Name: Aman
Enter Salary: 35000

Enter details for Employee 3:
Enter Employee ID: 103
Enter Employee Name: Simran
Enter Salary: 50000

Enter details for Employee 4:
Enter Employee ID: 104
Enter Employee Name: Priya
Enter Salary: 60000

Enter details for Employee 5:
Enter Employee ID: 105
Enter Employee Name: Rohit
Enter Salary: 30000

Employee ID: 101
Employee Name: Raj
Salary: 25000
Bonus: 5000

Employee ID: 102
Employee Name: Aman
Salary: 35000
Bonus: 5250

Employee ID: 103
Employee Name: Simran
Salary: 50000
Bonus: 7500

Employee ID: 104
Employee Name: Priya
Salary: 60000
Bonus: 6000

Employee ID: 105
Employee Name: Rohit
Salary: 30000
Bonus: 6000
*/