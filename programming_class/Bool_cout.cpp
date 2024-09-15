#include <iostream>
using namespace std;
int main(){
    bool flag = true;
    cout.setf(ios::boolalpha);
    cout << flag;
    cout << static_cast<bool>(1);
    flag = false;
    cout << flag;
    cout << static_cast<bool>(0);
}