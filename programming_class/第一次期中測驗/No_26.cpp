#include <iostream>
using namespace std;
int main() {
    int x = 65;
    switch (x){
        case 'A': cout << "dot ";
        case 'T': cout << "dash "; break;
        case 'I': cout << "dot ";
        case 'E':  cout << "dot ";  break;
    }
}