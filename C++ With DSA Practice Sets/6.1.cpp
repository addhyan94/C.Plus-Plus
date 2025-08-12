//WAP to implement a Circular queue using an aray and class with basic operations like Inqueue, Dqueue, and display. with Switch case .

#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if ((front == 0 && rear == SIZE - 1) || (rear + 1) % SIZE == front) {
            cout << "Queue is Full\n";
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % SIZE;
        }

        arr[rear] = value;
        cout << value << " inserted at index " << rear << "\n";
    }

    void dequeue() {
 
        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << arr[front] << " removed from index " << front << "\n";

        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % SIZE;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Queue: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
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
