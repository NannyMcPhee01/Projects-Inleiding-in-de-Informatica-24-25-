#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    char operation;

    // Prompt user for input
    cout << "Enter your first number: ";
    cin >> number1;

    cout << "Enter your second number: ";
    cin >> number2;

    cout << "Do you want to add (+), subtract (-), multiply (*), or divide (/)? ";
    cin >> operation;

    // Perform the chosen operation
    switch (operation) {
        case '+':
            cout << "The result is: " << number1 + number2 << endl;
            break;
        case '-':
            cout << "The result is: " << number1 - number2 << endl;
            break;
        case '*':
            cout << "The result is: " << number1 * number2 << endl;
            break;
        case '/':
            if (number2 != 0) {
                cout << "The result is: " << number1 / number2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}
