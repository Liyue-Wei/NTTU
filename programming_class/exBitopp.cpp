#include <iostream>
using namespace std;
int main() {
    char a=0x1a, b=0x90;
    cout << hex << "hex a = " << static_cast<int>(a) << "\n";
    cout << hex << "hex b = " << static_cast<int>(b) << "\n";
    cout << hex << "hex a&b = " << static_cast<int>(a&b) << "\n";
    cout << hex << "hex a|b = " << static_cast<int>(a|b) << "\n";
    cout << hex << "hex a^b = " << static_cast<int>(a^b) << "\n";
}