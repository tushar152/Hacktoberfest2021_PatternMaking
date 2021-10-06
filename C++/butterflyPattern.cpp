#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
int a;
cin>>a;

		for(int i=1; i<=a; i++){
		for(int j=1; j<=i; j++){
			if(j==1 || j==i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		for(int j=1; j<=2*a-2*i; j++){
			cout<<" ";
		}
		for(int j=1; j<=i; j++){
				if(j==1 || j==i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
			}
			
				for(int i=a; i>=1; i--){
		for(int j=1; j<=i; j++){
				if(j==1 || j==i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		for(int j=1; j<=2*a-2*i; j++){
			cout<<" ";
		}
		for(int j=1; j<=i; j++){
				if(j==1 || j==i){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
			}
		
}
