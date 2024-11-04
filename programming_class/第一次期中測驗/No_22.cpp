#include <iostream>
using namespace std;
int main() {
    int x = 'G';
    switch(x) {
        case 'u':cout <<"Up"; break;
        case 'd': cout << "Down"; break;
        case 'l': cout << "Left"; break;
        case 'r': cout << "Right"; break;
        default: cout << "NA"<< endl;
    }
}