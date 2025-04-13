//Wap to create a class and check number is prime or not and also check number is armstrong or not
#include <iostream>
#include <math.h>
using namespace std;

class NumberCheck
 {
    int num;

public:
    void getdata()
     {
        cout << "Enter the number = ";
        cin >> num;
    }
    void display()
     {
        cout << "\nNumber = " << num;
    }

    void checkArmstrong() 
    {
        int n = num, sum = 0, temp = num, digits = 0;

        while (temp > 0) 
        {
            temp /= 10;
            digits++;
        }

        while (n > 0)
         {
            int rem = n % 10;
            sum += pow(rem, digits);
            n /= 10;
        }

        if (sum == num)
            cout << "\nNumber is Armstrong";
        else
            cout << "\nNumber is not Armstrong";
    }

    void checkPrime() 
    {
        if (num < 2) 
        {
            cout << "\nNumber is not Prime";
            return;
        }

        for (int i = 2; i * i <= num; i++) 
        {
            if (num % i == 0)
             {
                cout << "\nNumber is not Prime";
                return;
            }
        }
        cout << "\nNumber is Prime";
    }
};

int main() 
{
    NumberCheck a;
    a.getdata();
    a.display();
    a.checkArmstrong();
    a.checkPrime();
    return 0;
}


/* Output ~
Enter the number = 153
Number = 153
Number is Armstrong
Number is not Prime

.................................
Enter the number = 7
Number = 7
Number is not Armstrong
Number is Prime

*/