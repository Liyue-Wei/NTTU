#include <iostream>
using namespace std;
int main() {
    int x=5, y=3;
if ( x < 3 ) cout << "正月" ;
else
if ( x < 9 ) 
if ( y > 5 ) cout << "桂月" ;
else cout << "菊月";
else
if (y<5) cout << "仲冬" ;
else cout << "臘月";
}