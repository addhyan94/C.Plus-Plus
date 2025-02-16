// allready define c++ header file.
#include <iostream>
// user define header file.
#include"pmkh.h"
using namespace std;
int main() 
{
    cout <<"aapni heder file ban gayi hai jisse aapan hello print karte hai chalo "<<endl;
    aapni_heder_file();
    cout<<"heder file se kuch add karte hai ( Number is 10 + 20 ) = "<<add_kara_lo(10,20)<<endl;
    return 0;
}

//aapan jo heder file bana rahe hai ya use kar rahe hai usko phale aapnko aapni file me include karna padega uske baad aap usko use kar sakte hai , or heder file me uska code likhna parega [pmkh.h] me jo code likha gaya hai , or fer aapna usko use karne ke liye jese simplay function ka use karte hai same ese he karenge , cghalo iska output dekhte hai 

/* Output - 
aapni heder file ban gayi hai jisse aapan hello print karte hai chalo 
Lo call kiya tah heder file ko to aa gaya heder file ke aander hehehe
~~~ Hello print karna tha bro to lo
                                   |
                                   V
                               Hello Dost ~~~
heder file se kuch add karte hai ( Number is 10 + 20 ) = 30
*/