#include <iostream>
using namespace std;
void move(int n,char a,char b,char c) {
	if (n==1) {
		cout<<"Move disk "<<n<<" from"<<a<<" to "<<c<<endl;
	} else {
		move(n-1,a,c,b);
		cout<<"Move disk "<<n<<" from"<<a<<" to "<<c<<endl;
		move(n-1,b,a,c);
	}
}
int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	move(n,'A','B','C');
	cout<< endl;
}