#include <iostream>
using namespace std;
int main() {
    int dia, sys;
    cin>>dia>>sys;
    if (sys <120 && dia <80) cout<< "���`";
    else if (sys>=120&&sys<130 && dia<80) cout<< "�ɰ�";
    else if (sys>=130&&sys<140 && dia>=80&&dia<90) cout<< "�������Ĥ@��";
    else if (sys>=140&&sys<=180 || dia>=90) cout<< "�������ĤG��";
    else if (sys>180 || dia>120) cout<< "�������M�I��";
}