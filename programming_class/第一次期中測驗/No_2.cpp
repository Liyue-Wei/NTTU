#include <iostream>
int main() {
    int z = 0x33;
    z<<=1; 
    std::cout << std::hex << z << std::endl;
}