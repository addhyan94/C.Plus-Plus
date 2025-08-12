// Count number of even and odd elements in an array using Stack . 

#include <iostream>
using namespace std;
#define size 20
class check {
int ar[size];
int top,even,odd;
public:
    check(){
        top = -1;
    }
    void push(){
    int n, value;
    cout << "\nKitne elements dalne hain? ";
    cin >> n;
    for(int i = 0; i < n; i++){
        if (top >= size - 1) {
            cout << "\n Stack Full ho gaya. or elements nahi daal sakte hoo....\n";
            break;
        }
        cout << "\n Index " << (top + 1) << " ke liye number dalo: ";
        cin >> value;
        push(value);
    }
}

    void push(int value ){
 if (top >= size - 1) {
    cout << "\n Stack bhar chukaa hai bahut jada ...... ( Overflow ) ";
}
else {
    top++;
    ar[top] = value ;
}
    }
    void pop(){
        if (top==-1)
        {
            cout<<"\n Stack khalii hai kuch ni hai isme..... ( Underflow ) ";
        }
        else
        {
            cout << "\n Element " << ar[top] << " delete ho gaya.";
            top--;

        }
    }
    void traverse(){
        odd=even=0;
        for (int i = top; i >= 0; i++)
        {
           if(ar[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        cout<<"\nTotal Even Numbers:: "<<even;
        cout<<"\nTotal Odd Numbers:: "<<odd;
    }
    void display(){
    if(top == -1){
        cout << "Stack is empty.\n";
    } else {
        cout << "Stack elements:\n";
        for(int i = top; i >= 0; i--){
            cout << ar[i] << " ";
        }
        cout << endl;
    }
}

};

int main()
{
    check obj;
    int choice; 
    do
    {
        cout<<" 1. Push(Add)~. \n 2. POP(Delete)~. \n 3.Total Even Odd Numbers~.  \n 4. Display~. \n 5. Exit~. \n ";
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
        obj.push();
        cout<<"\n";
        break;
        case 2:
        obj.pop();
        cout<<"\n"<<endl;
        break;
        case 3:
        obj.traverse();
        cout<<"\n";
        break;
        case 4:
        obj.display();
        cout<<"\n";
        break;
        case 5:
        cout<<"\n Program se bahar nikal rahe ho aap ..............."<<endl;
        cout<<"\n";
        break;
        default:
        cout<<"\n Aap ki choice he galat bhai sahi choice Daloo.....  \n ";
        cout<<"\n";
        }
    } while (choice!=5);
    return 0;
}