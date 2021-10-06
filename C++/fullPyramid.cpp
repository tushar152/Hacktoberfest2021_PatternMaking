#include <iostream>
using namespace std;

//this function will take input as size and prints the full pyramid
//of size/length n as output
void fullPyramid(int size) {
	for(int row=1;row<=size;row++) {
		for(int space=1;space<=size-row;space++) {
			cout<<' '<<' ';
		}
		int num=row;
		for(int inc=1;inc<=row;inc++) {
			cout<<num<<' ';
			num++;
		}
		num--;
		for(int dec=1;dec<=row-1;dec++) {
			num--;
			cout<<num<<' ';
		}
		cout<<endl;
	}
}

int main() {
	int n;
	cin>>n;
	//calling the fullPyramid function 
	fullPyramid(n);
}
