// #include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int grade[5];
    cin >> grade[0] >> grade[1] >> grade[2] >> grade[3] >> grade[4];
    
    ofstream outFile("grade.dat", ios::out);
    outFile << grade[0] << grade[1] << grade[2] << grade[3] << grade[4];
    
    ifstream inFile("grade.dat", ios::in);
    inFile >> grade[0] >> grade[1] >> grade[2] >> grade[3] >> grade[4];
    cout << grade[0] << " " << grade[1] << " " << grade[2] << " " << grade[3] << " " << grade[4] << endl;
    
    double average;
    average = (grade[0]+grade[1]+grade[2]+grade[3]+grade[4])/5.0;
    cout << "¥­§¡¦¨ÁZ= " << average << endl;
    
    system("PAUSE");
    return 0;
}

