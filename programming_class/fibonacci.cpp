#include <iostream>
using namespace std;
int fib(int n) {
    return (n == 1 || n == 2) ? 1 : fib(n-1) + fib(n-2);
}

int main() {
    int i;
    cin >> i;
    cout << fib(i) << endl;

    return 0;
}