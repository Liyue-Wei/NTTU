#include <iostream>
using namespace std;
int main() {
    int letter = 101;
    if (letter >= 'A' && letter <= 'Z')  
        cout<<static_cast<char>(letter+32);
    else if (letter >= 'a' && letter <= 'z')
         cout<<static_cast<char>(letter-32);
}