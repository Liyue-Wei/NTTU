#include <iostream>
#include <stdlib.h>
#include <ctime>
// using namespace std;
int main() {
    int x, f[11]={0}, n=0;
    srand(time(0));  // srand()，設定 random 的亂數種子
    for (int i=1; i<6e6; i++) {
        // std::cout << std::rand()%6+1 << std::endl;

        /*
        switch (std::rand()%6+1) {
            case 1: f[1]++; break;
            case 2: f[2]++; break;
            case 3: f[3]++; break;
            case 4: f[4]++; break;
            case 5: f[5]++; break;
            case 6: f[6]++; break;
        }        
        */
        n = std::rand()%10;
        f[n]++;
    }
    printf("%f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", f[1]/6e6, f[2]/6e6, f[3]/6e6, f[4]/6e6, f[5]/6e6, f[6]/6e6, f[7]/6e6, f[8]/6e6, f[9]/6e6, f[10]/6e6);
}