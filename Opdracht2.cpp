#include <iostream> 

using namespace std;

int main() {
    cout << "What year were you born in?" << endl;
    int birthyear;
    cout << "Enter the year which you were born in: ";
    cin >> birthyear;
    int currentyear = 2024; 
    int difference = currentyear - birthyear;
    cout << "Your age is " << difference <<  endl;
    return 0;
}