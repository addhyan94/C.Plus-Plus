// WAP to craete a class your name and another class your family"s name and inherit this class 

#include<iostream>
using namespace std;
class name
{
    public:
    string n;
    void getdata()
    {
        cout<<"enter your name=";
        cin>>n;
    }
    void display()
    {
    cout<<"Name="<<n<<endl;
    }
};
class shubh
{
    public:
    void dikhao ()
    {
        cout<<"I loveeee uuuuu Babbyyy"<<endl;
    }
};

class family:public name,public shubh
{
    public:
    void print()
    {
        cout<<"Daddyyyyy"<<endl;
        cout<<"Maaaaa"<<endl;
        cout<<"Babbuuuuuuu"<<endl;
        cout<<"Meeeeeee"<<endl;
    }
};
int main()
{
    family a;
    a.getdata();
    a.display();
    a.print();
    a.dikhao();
return(1);
}
