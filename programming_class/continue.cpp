#include <iostream>
using namespace std;
int main() {
    int i, n, t=0;
    cin >> i;
    for (n=1; n<=i; n++) {
        if (n%7==0) {
            continue;
        } else {
            cout << n << ((n%i) ? (((n+1)%7!=0) ? " + " : (((n+1)!=i) ? " + " : " ")) : " ");
            t+=n;
        }
    }
    cout << "= " << t;
}
