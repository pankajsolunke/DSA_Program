#include <iostream>
#define MAX 5
using namespace std;

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int element) {
    if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        queue[rear] = element;
    } else if ((rear + 1) % MAX == front) {
        cout << "Queue is overflow.." << endl;
    } else {
        rear = (rear + 1) % MAX;
        queue[rear] = element;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        cout << "\nQueue is underflow.." << endl;
    } else if (front == rear) {
        cout << "\nThe dequeued element is " << queue[front] << endl;
        front = -1;
        rear = -1;
    } else {
        cout << "\nThe dequeued element is " << queue[front] << endl;
        front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        cout << "\nQueue is empty.." << endl;
    } else {
        cout << "\nElements in the Queue are: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
}

int main() {
    int choice = 1, x;

    while (choice < 4 && choice != 0) {
        cout << "\nPress 1: Insert an element";
        cout << "\nPress 2: Delete an element";
        cout << "\nPress 3: Display the elements";
        cout << "\nPress 0: Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to be inserted: ";
                cin >> x;
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    return 0;
}
