//  Control statements and loops practice in c++ .
#include<iostream>
using namespace std;

int control_statement()
{
    int age;
    cout<<"Enter your age for entering in the party : ";
    cin>>age;
    if(age<18)
    {
        cout<<"You can not enter in the party"<<endl;
    }
    else if(age == 18)
    {
        cout<<"you can enter in the party but you can not drink and smoking . only dance and enjoy the party. "<<endl;
    }
    else
    {
        cout<<"You can enter in the party and full enjoy the party ."<<endl;
    }
    return 0;
}
 int loop_statement()
 {
     int number[3];
     string name[3];
    string city[3];
    int i=1;
    while(i<=3)
    {
        cout<<"Enter the Name "<<i<<" Person :";
        cin>>name[i];
        cout<<"Enter the City name"<<i<<" Person :";
        cin>>city[i];
        cout<<"Enter the Mobile Number"<<i<<" Person :";
        cin>>number[i];
        i++;
    }
    cout<<"Name\tCity\tMobile Number"<<endl;
    int j=1;
    do{
        cout<<name[j]<<"\t"<<city[j]<<"\t"<<number[j]<<endl;
        j++;
    }while(j<=3);
    return 0;
 }

 int main()
 {
    char choice;
    cout<<"Enter the choice for control statement and loop statement ( c , l ):";
    cin>>choice;
    switch(choice)
    {
        case 'c':
        control_statement();
        break;
        case 'l':
        loop_statement();
        break;
        default:
        cout<<"Invalid choice"<<endl;
    }
 }