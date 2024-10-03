#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer between -128 and 127: ";
    cin >> num;

    // 檢查輸入範圍
    if (num < -128 || num > 127) {
        cout << "Input out of range!" << endl;
        return 1;
    }

    // 將整數轉換為8位元的二進制表示
    bitset<8> binary(num);
    cout << "8-bit binary representation: " << binary << endl;

    return 0;
}
