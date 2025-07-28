#include <iostream>
using namespace std;

class CircularQueue {
    int size;
    int* q;
    int front;
    int rear;

public:
    CircularQueue(int size) {
        this->size = size;
        q = new int[size];
        front = -1;
        rear = -1;
    }

    // Insert element at rear
    void enQueue(int data) {
        if ((rear + 1) % size == front) {
            cout << "Overflow" << endl;
            return;
        }

        // Empty queue
        if (isEmpty()) {
            front = rear = 0;
            q[rear] = data;
        } else {
            rear = (rear + 1) % size;
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
            front = (front + 1) % size;
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

    // Traverse and print the queue
    void traverse() {
        if (isEmpty()) {
            cout << "Empty Queue" << endl;
            return;
        }

        int i = front;
        while (true) {
            cout << q[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    ~CircularQueue() {
        delete[] q;
    }
};

int main() {
    CircularQueue queue(5);
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