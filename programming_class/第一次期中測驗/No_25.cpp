#include <iostream>
using namespace std;
int main() {
    float a = 7 / 2;
    int b = 3 * (++a);
    int c = b + a++;

    cout << a << " " << b << " " << c;
}