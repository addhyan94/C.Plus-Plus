/*Inline Function Practice:
QUESTION:
Tumhare Demo class me ek aur function reset() add karo jo a aur b ko 0 pe set kare. Is function ko inline declare karo.
Ek inline function incrementBy(int x) banao jo a aur b ko x se increment kare.
Or fer Code me Kuch Colors Add bhi karo .*/
#include<iostream>
using namespace std;

class Demo{
int a,b;
int static c;
public:
void getdata(){
    cout<<"\03[1;31mEnter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
}
 inline void print(){
    cout<<"\033[1;34mDisplay the All Values :::\033[0m"<<endl;
    cout<<"\033[1;32mThe First Value is :"<<a<<endl;
    cout<<"The Second Value is :"<<b<<endl;
 }
 inline void add(){
    cout<<"\033[1;33minside Add Function :"<<endl;
    a++;
    b++;
    cout<<"a: "<<a<<"  + b: "<<b<<"  + c: "<<c<<" = "<<a+b+c<<endl;
}
inline void incrementBy(int x){
    cout<<"\033[1;33minside incrementBy (5) Function :"<<endl;
    a+=x;
    b+=x;
}
inline void sab0(){
    cout<<"\033[1;33minside Sab 0 Function :"<<endl;
    
    a=0;
    b=0;
}
};
int Demo::c=10;

 int main(){
    Demo h,j,k;
    h.getdata();
    h.incrementBy(5);
    h.print();
    h.add();
    h.print();
    h.sab0();
    h.print();
    j.getdata();
    j.add();
    j.print();
    j.incrementBy(20);
    j.print();
    j.sab0();
    j.print();
    return (1);
 }