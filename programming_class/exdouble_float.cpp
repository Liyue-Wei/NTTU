#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;
int main(){
    float i;
    double i_2;
    long double n;

    cout << "sizeof(float) = " << sizeof(i) << "\n";
    cout << "sizeof(double) = " << sizeof(i_2) << "\n";
    cout << "sizeof(long double) = " << sizeof(n) << "\n";

    cout << "max float = " << numeric_limits<float>::max() << "\n";
    cout << "min float = " << numeric_limits<float>::min() << "\n";
    cout << "max double = " << numeric_limits<double>::max() << "\n";
    cout << "min double = " << numeric_limits<double>::min() << "\n";
    cout << "max long double = " << numeric_limits<long double>::max() << "\n";
    cout << "min long double = " << numeric_limits<long double>::min() << "\n";

    float x;
    double y;
    long double z;
    x=y=z = 1/3.0;  
    cout << fixed << setprecision(32) << "x= " << x << "\n";
    cout << fixed << setprecision(32) << "y= " << y << "\n";
    cout << fixed << setprecision(32) << "z= " << z << "\n";

    return 0;
}