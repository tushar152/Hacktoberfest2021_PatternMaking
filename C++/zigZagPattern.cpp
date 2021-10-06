#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int c;
	cin>>c;
	int r = 3;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			if((j+i)%4==0){
				cout<<"*";
			}
			else if((j%4==0 && i==2)){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
			}
		cout<<endl;
	}
	
		

	
	
	return 0;
}
