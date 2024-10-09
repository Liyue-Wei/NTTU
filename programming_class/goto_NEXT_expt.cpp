#include <iostream>
using namespace std;
int main() {
    int grade[128];
    for(int n=0; n<=127; n++) {
        grade[n] = n;
    }

    int max = grade[0];
    int i=0;
    NEXT:
        // cout << i << '\n';
        if (grade[i]>max) max=grade[i];
        i++;
        if (i<128) goto NEXT;

    cout << max;
}