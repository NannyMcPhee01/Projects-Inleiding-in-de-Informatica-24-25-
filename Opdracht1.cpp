#include <iostream> 

using namespace std;

int main() {
    cout << "What's your first number?" << endl;
    int number1;
    cout << "Enter your first number: ";
    cin >> number1;
    cout << "What's your second number?" << endl;
    int number2;
    cout << "Enter your second number: ";
    cin >> number2;
    int sum = number1 + number2;
    cout << "The sum of both numbers is " << sum <<  endl;
    return 0;
}