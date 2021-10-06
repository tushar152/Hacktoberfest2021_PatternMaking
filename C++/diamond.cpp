#include<iostream>
using namespace std;


int main() {
    
  
    int n;
    cin>>n;
    int i=1;
    int mid=n/2;
    while(i<=mid+1)
    {
        
        int k=1;
        while(k<=mid+1-i)
        {
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=(2*i)-1)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
    i=mid;
    while(i>=1)
    {
        int k=1;
        while(k<=mid+1-i)
        {
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=(2*i)-1)
        {
            cout<<"*";
            j++;
        }
        i--;
        cout<<endl;
    }
    
}
