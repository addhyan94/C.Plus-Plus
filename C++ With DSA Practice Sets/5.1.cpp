// WAP to implement a simple queue using an aray and class with basic operations like Inqueue, Dqueue, and display.

#include <iostream>
using namespace std;

#define size 50
class Queue {
    int ar[size]; 
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void Inqueue(int value) {
        if (rear == size - 1) {
            cout << "Queue pura full ho gaya hai ...... \n";
        } else {
            if (front == -1){
            front = 0;
            }
            rear++;
            ar[rear] = value;
            cout << value << " queue me add kar diya gaya hai ... \n";
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

int main() {
    Queue a;

    a.Inqueue(30);
    a.Inqueue(40);
    a.Inqueue(50);
    a.display();
    a.Dqueue();
    a.display();
    a.Inqueue(60);
    a.Inqueue(70);
    a.display();
    a.Dqueue();
    a.display();
    a.Inqueue(80);
    a.display();
    a.Dqueue();
    a.Inqueue(90);
    a.display();

    return (1);
}

/*Output ~~ 
30 queue me add kar diya gaya hai ... 
40 queue me add kar diya gaya hai ...
50 queue me add kar diya gaya hai ...
Queue's elements: 30 40 50
30 queue se remove kar diya hai ...
Queue's elements: 40 50
60 queue me add kar diya gaya hai ...
70 queue me add kar diya gaya hai ...
Queue's elements: 40 50 60 70
40 queue se remove kar diya hai ...
Queue's elements: 50 60 70 
80 queue me add kar diya gaya hai ...
Queue's elements: 50 60 70 80
50 queue se remove kar diya hai ...
90 queue me add kar diya gaya hai ...
Queue's elements: 60 70 80 90
*/