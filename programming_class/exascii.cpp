#include <iostream>
using namespace std;
int main(){
    char c;
    cout << "input a char "; cin >> c;

    cout << "ASCII Code : " << static_cast<int>(c) << endl;
    cout << "ASCII Code : "<< hex << int(c) << endl;

    cout.setf(ios::hex, ios::basefield);
    cout.setf(ios::showbase);
    cout << static_cast<int>(c) << endl;
    cout << hex << int(c) << endl;

}