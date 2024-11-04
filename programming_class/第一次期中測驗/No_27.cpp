#include <iostream>
using namespace std;
int main() {
    int dia, sys;
    cin>>dia>>sys;
    if (sys <120 && dia <80) cout<< "正常";
    else if (sys>=120&&sys<130 && dia<80) cout<< "升高";
    else if (sys>=130&&sys<140 && dia>=80&&dia<90) cout<< "高血壓第一期";
    else if (sys>=140&&sys<=180 || dia>=90) cout<< "高血壓第二期";
    else if (sys>180 || dia>120) cout<< "高血壓危險期";
}