#include <iostream>
using namespace std;

class ArrayOperations {
private:
    int arr[100];
    int size;

public:
    ArrayOperations() : size(0) {}

    void insert(int value, int position) {
        if (position < 0 || position > size) {
            cout << "Invalid position!" << endl;
            return;
        }

        for (int i = size; i > position; --i) {
            arr[i] = arr[i - 1];
        }
        arr[position] = value;
        size++;
        cout << "Value inserted successfully." << endl;
    }

    void remove(int position) {
        if (position < 0 || position >= size) {
            cout << "Invalid position!" << endl;
            return;
        }

        for (int i = position; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Value deleted successfully." << endl;
    }

    void display() {
        if (size == 0) {
            cout << "Array is empty." << endl;
            return;
        }

        cout << "Array elements: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayOperations arrayOps;
    int choice, value, position;

    while (true) {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            cout << "Enter position (0-based index): ";
            cin >> position;
            arrayOps.insert(value, position);
            break;

        case 2:
            cout << "Enter position to delete (0-based index): ";
            cin >> position;
            arrayOps.remove(position);
            break;

        case 3:
            arrayOps.display();
            break;

        case 4:
            cout << "Exiting program." << endl;
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}
