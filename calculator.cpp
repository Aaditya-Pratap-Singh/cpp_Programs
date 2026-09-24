#include <iostream>
#include <cmath>
using namespace std;
int main() {
    char choice;
    float a, b;
    cout << "Enter a choice (+, -, *, /,%): ";
    cin >> choice;
    switch (choice) {
        case '+':
            cout << "enter the value of a and b: ";
            cin >> a >> b;
            cout << "sum = " << a + b << endl;
            break;
        case '-':
            cout << "enter the value of a and b: ";
            cin >> a >> b;
            cout << "sub = " << a - b << endl;
            break;
        case '*':
            cout << "enter the value of a and b: ";
            cin >> a >> b;
            cout << "product = " << a * b << endl;
            break;
        case '/':
            cout << "enter the value of a and b: ";
            cin >> a >> b;
            if (b != 0) {
                cout << "division = " << a / b << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        case '%':
        	cout << "enter the value of a and b: ";
            cin >> a >> b;
            if (b != 0) {
                cout << "modulus = " << fmod(a,b) << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    return 0;
}
