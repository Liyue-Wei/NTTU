#include <iostream>
using namespace std;
int fib(int n) {
    return (n == 1 || n == 2) ? 1 : fib(n-1) + fib(n-2);
}

int main() {
    int i;
    cin >> i;
    cout << "Fibonacci : ";
    for (int n=1; n<=i; n++) {
        cout << fib(n) << ' ';
    }

    return 0;
}