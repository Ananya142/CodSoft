#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    // Display a menu of available operations
    cout << "Welcome to the basic calculator!" << endl;
    cout << "Choose an operation from the following menu:" << endl;
    cout << "1. Add (+)" << endl;
    cout << "2. Subtract (-)" << endl;
    cout << "3. Multiply (*)" << endl;
    cout << "4. Divide (/)" << endl;

    // Input the two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Ask user to select the operation
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    // Perform the selected operation
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation! Please enter one of the listed operations." << endl;
            break;
    }

    return 0;
}
