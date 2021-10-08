// Half pyramid 180
/* 
   *
  **
 ***
****

*/


#include<iostream>
using namespace std;

int main(){
  int n;                   // now of rows or cols sqr
  cin>>n;

  for(int i=1;i<=n;i++){             // row
    for(int j=1;j<=n;j++){           //column
        if(j<=n-i){
            cout<<"  ";  // space
    }else {
     cout<<"* ";             // * print
    }
   }
    cout<<endl;    // NEWline
  }
return 0;
}

