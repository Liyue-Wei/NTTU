#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    int d1 = x / 100;
    int d2 = (d1 % 100) / 10;
    int d3 = x % 10;
    if (x == d1*d1*d1 + d2*d2*d2 + d3*d3*d3) cout<<"Armstrong"<<endl;
    else  cout<<"Strongarm"<<endl;
}