// practice code local , grobal variable and function .
// kese kaam karte hai , kya ek he naam ke variable or function banaye ja sakte hai ya nahi local , grobal me .
#include<iostream>
using namespace std;

int glo=15;
void check()
{
    int a;
    a=2;
    cout<<"A ki value jo grobal function banaya usme = "<<a;
    cout<<"\nGlo ki value jo grobal function ke bahar banaya ="<<glo;
}
int main()
{
    int integer_number=100;
    float float_number=99.99;
    char char_value ='p';
    string string_value ="I'm not coder. ";
    bool bool_value= true;
    bool bool_value1= false;
    int glo = 69;
    table:
    cout<<"Integer Number = "<<integer_number<<endl;
    cout<<"Float Number = "<<float_number<<endl;
    cout<<"Char Value = "<<char_value<<endl;
    cout<<"String Value = "<<string_value<<endl;
    cout<<"Bool Value (true = 1 / false = 0) = "<<bool_value<<endl;
    cout<<"Bool Value1 (true = 1 / false = 0) = "<<bool_value1<<endl;
    cout<<"local value Glo = "<<glo<<endl;
    check();
}

//isse hume samjhe aata hai ki local variable ka value sirf usi function me hi rahega , jabki grobal variable ka value pure program me rahega.
//mtb agar ek he naam se local variable or grobal variable banaye jaye to dono alag alag honge , main me sabse phale local ko dekha jayega baad me grobal ko.
//agar local me nahi mila to grobal me dekha jayega.for EG=>  

/* Output -
Integer Number = 100
Float Number = 99.99
Char Value = p
String Value = I'm not coder.
Bool Value (true = 1 / false = 0) = 1
Bool Value1 (true = 1 / false = 0) = 0
local value Glo = 69
A ki value jo grobal function banaya usme = 2
Glo ki value jo grobal function ke bahar banaya =15

*/