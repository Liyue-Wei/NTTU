#include <iostream>
using namespace std;
int main() {
    int i, n, t;
    bool flag_1=0, flag_2=0, flag_3=0;
    cin >> i >> n >> t;
    t = 2*(n=i+2);
    flag_1 = (i>=65) && (i<=90); flag_2 = (n>=65) && (n<=90); flag_3 = (t>=65) && (t<=90);

    cout << "i= " << i << " flag_1= " << flag_1 << endl;
    cout << "n= " << n << " flag_2= " << flag_2 << endl;
    cout << "t= " << t << " flag_3= " << flag_3 << endl;
    cout << endl;

    int a, b, c;
    a=1; b=3; c=5;
    a+=b++;
    cout << "a= " << a << endl;  //b++為運算後加1，先算a+=b，再算b++
    cout << "b= " << b << endl;
    cout << endl;

    a+=++c;
    cout << "a= " << a << endl;  //++c為運算前加1，先算c++，再算a+=c
    cout << "c= " << c << endl;
    cout << endl;

    return 0;
}