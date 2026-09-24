//to check armstrong no.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, temp, remainder, count = 0, result = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    temp = n;
    int original = n;
    while (original != 0) {
        original /= 10;
        count++;
    }
    original = n;
    while (original > 0) {
        remainder = original % 10;
        result += pow(remainder, count);
        original /= 10;
    }
    if (result == n) {
        cout<<n <<"is an Armstrong number." << endl;
    } else {
        cout<<n << "is NOT an Armstrong number." << endl;
    }
    return 0;
}
