#include <iostream>
using namespace std;

//this function will take input as size and prints the full pyramid
//of size/length n as output
void fullPyramid(int size) {
	for(int row=1;row<=size;row++) {
		for(int space=1;space<=size-row;space++) {
			cout<<' '<<' ';
		}
		cout<<1<<' ';
		if(row!=size) {
			for(int inSpace=1;inSpace<=2*(row-1)-1;inSpace++) {
				cout<<' '<<' ';
			}
		}
		else {
			for(int pos=2;pos<=size;pos++) {
				cout<<' '<<' ';
				cout<<pos<<' ';
			}
		}
		if(row!=1 && row!=size)
			cout<<row;
		cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	//calling the fullPyramid function 
	fullPyramid(n);
}
