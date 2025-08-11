// // WAP to implement a simple queue using an aray and class with basic operations like Inqueue, Dqueue, and display. with Switch case .

#include <iostream>
using namespace std;
#define size 50
class queue {
    int ar[size];
    int front, rear;
public:
    queue() {
        front =-1;
        rear =-1;
    }
    void Inqueue(){
        int value ;
        cout<<"Enter Value :";
        cin>>value;
        Inqueue(value);
    }
    void Inqueue(int value){
        if (rear == size-1){
            cout<<"Queue Full hai ...\n";
        }
        else
        {
            if (front==-1){
                front=0;
            }
            rear++;
            ar[rear]=value;
            cout<<value<<"Add ho gaya ..\n";
        }
    }
    void Dqueue() {
        if (front == -1 || front > rear) {
            cout << "Queue pura empty hai ....\n";
        } else {
            cout << ar[front] << " queue se remove kar diya hai ...\n";
            front++;
        }
    }
        void display() {
        if (front == -1 || front > rear) {
            cout << "Queue pura empty hai ....\n";
        } else {
            cout << "Queue's elements: ";
            for (int i = front; i <= rear; i++) {
                cout << ar[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    queue a;
    int choice; 
    do
    {
        cout<<" 1. Inqueue(Add) \n 2. Dqueue(Delete) \n 3. Display \n 4. Exit. \n ";
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
        a.Inqueue();
        cout<<"\n";
        break;
        case 2:
        a.Dqueue();
        cout<<"\n"<<endl;
        break;
        case 3:
        a.display();
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
/*Output~~
 1. Inqueue(Add) 
 2. Dqueue(Delete)
 3. Display
 4. Exit.
 Enter your Choice: 1
Enter Value :5
5Add ho gaya ..

 1. Inqueue(Add)
 2. Dqueue(Delete)
 3. Display
 4. Exit.
 Enter your Choice: 1
Enter Value :6
6Add ho gaya ..

 1. Inqueue(Add)
 2. Dqueue(Delete)
 3. Display
 4. Exit.
 Enter your Choice: 1
Enter Value :8
8Add ho gaya ..

 1. Inqueue(Add)
 2. Dqueue(Delete)
 3. Display
 4. Exit.
 Enter your Choice: 1
Enter Value :9
9Add ho gaya ..

 1. Inqueue(Add)
 2. Dqueue(Delete)
 3. Display
 4. Exit.
 Enter your Choice: 3
Queue's elements: 5 6 8 9 

 1. Inqueue(Add)
 2. Dqueue(Delete)
 3. Display
 4. Exit.
 Enter your Choice: 2
5 queue se remove kar diya hai ...


 1. Inqueue(Add)
 2. Dqueue(Delete)
 3. Display
 4. Exit.
 Enter your Choice: 3
Queue's elements: 6 8 9 

 1. Inqueue(Add)
 2. Dqueue(Delete)
 3. Display
 4. Exit.
 Enter your Choice: 1
Enter Value :66
66Add ho gaya ..

 1. Inqueue(Add)
 2. Dqueue(Delete)
 3. Display
 4. Exit.
 Enter your Choice: 3
Queue's elements: 6 8 9 66 

 1. Inqueue(Add)
 2. Dqueue(Delete)
 3. Display
 4. Exit.
 Enter your Choice: 4

 Program se bahar nikal rahe ho aap ...............
*/