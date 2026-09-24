#include <iostream>
using namespace std;
int main() {
    int n;
    long long a = 0, b = 1, sum = 0;
    cout << "Fibonacci series" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << a << " ";
        } 
        else if (i == 2) {
            cout << b << " ";
        } 
        else {
            sum = a + b;
            cout << sum << " ";
            a = b;
            b = sum;
        }
    }
    cout << endl;
    return 0;
}
