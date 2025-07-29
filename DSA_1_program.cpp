#include <iostream>
using namespace std;
#define size 100
class st
 {
    private:
     int ar[size];
     int top;
     public:
     st(){
     top=-1;
     }
     void push() {
        int value;
        cout<<" Value Daloo : ";
        cin>>value;
        push(value);
     }
     void push(int value){
         if(top==size-1){
              cout<<"\n stack Jada bhar gaya... ( Overflow ) ";
          } 
          else
          {
            top ++;
            ar[top]=value;
            cout<<"\n push kiye hue number --:"<<value<<endl;
          }
          

     }
     void pop(){
        if (top==-1)
        {
            cout<<"\n Stack khalii hai kuch ni hai isme..... ( Underflow ) ";
        }
        else
        {
            cout<<"\n Pooped Value =" <<ar[top]<<endl;
            top --;
        }
     }
    void traverse(){
        if(top==-1){
            cout<<"\n stack khalii Hai bhaiyaa ::: "<<endl;
        }
        else
        {
            cout<<"\n Stack Elemeents ( top to bottom ):: ";
            for(int i=top; i>=0;i--){
                cout<<"\""<<ar[i]<<"\"";
            }
            cout<<"\n";
        }
    }
};

int main()
{
    st o;
    int choice; 
    do
    {
        cout<<" 1. Push(Add) \n 2. POP(Delete) \n 3. Display \n 4. Exit. \n ";
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
        o.push();
        cout<<"\n";
        break;
        case 2:
        o.pop();
        cout<<"\n"<<endl;
        break;
        case 3:
        o.traverse();
        cout<<"\n";
        break;
        case 4:
        cout<<"\n Program se bahar nikal rahe ho aap ..............."<<endl;
        cout<<"\n";
        break;
        default:
        cout<<"\n Aap ki choice he galat bhai sahi choice Daloo  \n ";
        cout<<"\n";
        }
    } while (choice!=4);
    
    return 0;
}