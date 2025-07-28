#include <iostream>
using namespace std;

class Queue {
    int size;
    int* q;
    int front;
    int rear;

public:
    Queue(int size) {
        this->size = size;
        q = new int[size];
        front = -1;
        rear = -1;
    }

    // Insert element at rear
    void enQueue(int data) {
        if (rear == size - 1) {
            cout << "Overflow" << endl;
            return;
        }

        // Empty queue
        if (isEmpty()) {
            front++;
            rear++;
            q[rear] = data;
        } else {
            rear++;
            q[rear] = data;
        }
    }

    // Delete element from front
    void deQueue() {
        if (front == -1) {
            cout << "Underflow" << endl;
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    // Check if queue is empty
    bool isEmpty() {
        return (rear == -1);
    }

    // Get the front element
    int getFront() {
        if (front == -1) {
            return -1;
        }
        return q[front];
    }

    // Traverse the queue
    void traverse() {
        if (isEmpty()) {
            cout << "Empty Queue" << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << q[i] << " ";
        }
        cout << endl;
    }

    ~Queue() {
        delete[] q;
    }
};

int main() {
    Queue queue(5);
    queue.enQueue(10);
    queue.enQueue(20);
    queue.enQueue(30);

    queue.traverse();
    queue.deQueue();
    queue.traverse();
    cout << boolalpha << queue.isEmpty() << endl;
    cout << queue.getFront() << endl;

    return 0;
}