#include <iostream>
using namespace std;

int stack[100], n, top = -1;

void push();
void pop();
void show();

int main() {
    int choice = 0;

    cout << "Enter the number of elements in the stack: ";
    cin >> n;

    cout << "*********** Stack Operations Using Array *************\n";
    cout << "\n-----------------------------------------------------------\n";

    while (choice != 4) {
        cout << "\nChoose one from the below options...\n";
        cout << "1. Push\n2. Pop\n3. Show\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Please enter a valid choice!" << endl;
        }
    }

    return 0;
}

void push() {
    int val;
    if (top == n - 1) {
        cout << "\nOverflow\n";
    } else {
        cout << "Enter the value: ";
        cin >> val;
        top++;
        stack[top] = val;
    }
}

void pop() {
    if (top == -1) {
        cout << "Underflow\n";
    } else {
        top--;
    }
}

void show() {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack elements are:\n";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
}
