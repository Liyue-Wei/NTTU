/*
eTutor - C_MM53
*/

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int k=0;
    long double x=0.0;
    cout.setf(ios::fixed);
    
    while (k<=pow(2, 30)) {
        x += ((pow((-1), k))/((2*k)+1));
        k++;
    }

    x*=4;
    cout << "  value = " << setprecision(64) << x << '\n';
    cout << "flag pi = " << setprecision(64) << M_PI << '\n';

    system("PAUSE");
    return 0;
}

/*
  value = 3.1415926507958280404237544347623156681947875767946243286132812500
flag pi = 3.1415926535897931159979634685441851615905761718750000000000000000
請按任意鍵繼續 . . . 
*/