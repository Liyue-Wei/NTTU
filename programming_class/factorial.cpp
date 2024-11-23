#include <iostream>
using namespace std;
int main() {
    // int n;
    // cin >> n;
    int n = 100;
    long double f=1.0;
    for (int i=1; i<=n; i++) {
        f*=i;
    }
    cout.setf(ios::fixed);
    cout << f << endl;

    return 0;
}