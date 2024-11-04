#include <iostream>
using namespace std;
int main() {
    int b0=0xf0, b1=0xa8;
    cout << hex << (b0 & b1) << endl;
}