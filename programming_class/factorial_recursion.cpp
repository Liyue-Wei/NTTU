#include <iostream>
using namespace std;
double fact(int n) {
    if (n == 0) return 1;
    else return n*fact(n-1);
}

int main() {
    // int n;
    // cin >> n;
    int n = 100;
    cout.setf(ios::fixed);
    cout << fact(n) << endl;

    return 0;
}