#include <iostream>
using namespace std;

// Recursive function to calculate factorial
long long factorial(int n) {
    if (n < 0) return -1; // Invalid input
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    long long result = factorial(num);

    if (result == -1) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is: " << result << endl;
    }

    return 0;
}
