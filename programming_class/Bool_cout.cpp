#include <iostream>
using namespace std;
int main() {
    bool flag = true;
    cout.setf(ios::boolalpha);
    cout << flag << "\n";
    cout << static_cast<bool>(1) << "\n";
    flag = false;
    cout << flag << "\n";
    cout << static_cast<bool>(0) << "\n";
}