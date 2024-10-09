#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    float y1 = 1/3.;
    cout << setprecision(32) << y1<<endl;
    double y2 = 1/3.;
    cout << setprecision(32) << y2<<endl;
}