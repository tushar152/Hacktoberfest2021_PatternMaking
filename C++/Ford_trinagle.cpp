
/* Ford trinagle pattern

 1
 2 3
 4 5 6
 7 8 9 10



 #include<iostream>
 using namespace std;
 void pattern(int n){
   int count=1;
  for(int i=1;i<=n;i++){
    for(int j=1;i>=j;j++,count++){
           cout<<count<<" ";
    }
    cout<<endl;
  }

 }
 int main(){
   int n;
   cout<<"enter n"<<endl;
   cin>>n;
   pattern(n);
   cout<<"done";
 return 0;
 }
*/
