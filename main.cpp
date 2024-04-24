#include <iostream>

using namespace std;

// Function prototypes
void displayMenu();
void performOperation(int choice, int num1, int num2);

int main() {
    char choice;

    do {
        int operation;
        int num1, num2;

        // Display menu and get user choice
        displayMenu();
        cin >> operation;

        // Input two integers
        cout << "Enter first integer: ";
        cin >> num1;
        cout << "Enter second integer: ";
        cin >> num2;

        // Perform operation based on user choice
        performOperation(operation, num1, num2);

        // Ask to continue
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

// Function to display menu
void displayMenu() {
    cout << "Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
}

// Function to perform operation based on cho
void performOperation(int choice, int num1, int num2) {
    switch (choice) {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 == 0) {
                cout << "The second integer is zero, divide by zero." << endl;
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}
