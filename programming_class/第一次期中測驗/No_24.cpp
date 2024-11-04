#include <iostream>
using namespace std;
int main() {
    int m = 286, n = 78, r;
    NEXT:
        r = m%n;
        if (r != 0) {   m=n; n=r;   goto NEXT; }
        else cout<< n << endl; 
}