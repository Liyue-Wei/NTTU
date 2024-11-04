#include <iostream>
#include <iomanip>
using namespace std;
int main() {
int result = 0;
for (int i = 1; i < 5 ; i++) {
    if (i %3 == 0) break;
    result += i ;
};
cout << result << endl ;
}