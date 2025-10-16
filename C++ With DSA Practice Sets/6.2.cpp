//WAP to implement a Circular queue using an aray and class with basic operations like Inqueue, Dqueue, and display.

#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
     int ar[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (front == (rear + 1) % SIZE ) {
            cout << "Queue full hai ..... \n";
        }

        else if (front == -1) {
            front = rear = 0;
            ar[rear] == value ;
            cout << value << " inserted at index " << rear << "\n";
        }
        else {
            rear = (rear + 1) % SIZE;
            ar[rear] == value ;
            cout << value << " inserted at index " << rear << "\n";
        }

    }

    void dequeue() {
        int value ;
        if (front == -1) {
            cout << "Queue is Empty\n";
        }
        else if (front == rear) {
            value = ar[front];
            front = rear = -1;
        }
        else {
            value = ar[front];
            front = (front + 1) % SIZE;
        }
        // return( value );
    }

    void display() {
        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Queue: ";
        int i = front;
        while (true) {
            cout << ar[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << "\n";
    }
};

int main() {
    CircularQueue q;

    q.enqueue(50);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();

    q.dequeue();
    q.display();

    q.enqueue(60);
    q.display();

    return 0;
}
