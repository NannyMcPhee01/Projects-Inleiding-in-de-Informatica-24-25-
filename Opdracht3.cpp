#include <iostream> 

using namespace std;

int main() {
    int Celsius;
    cout << "Enter degrees Celsius: " << endl;
    cin >> Celsius;
    int Fahrenheit = (Celsius * 9/5) + 32;
    cout << "This is " << Fahrenheit << " degrees Fahrenheit!" << endl;
    return 0;
}