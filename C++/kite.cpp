#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main(){
   int i, j, k, sp, space = 4;
   char prt = '$';
   //printing the upper half of the first diamond
   for (i = 1; i <= 5; i++){
      //printing the spaces in the front
      for (sp = space; sp >= 1; sp--){
         cout << " ";
      }
      //printing $ character
      for (j = 1; j <= i; j++){
         cout << prt;
      }
      for (k = 1; k <= (i - 1); k++){
         if (i == 1){
            continue;
         }
         cout << prt;
      }
      cout << "\n";
      space--;
   }
   space = 1;
   //printing the lower half of the first diamond
   for (i = 4; i >= 1; i--){
      for (sp = space; sp >= 1; sp--) {
         cout << " ";
      }
      for (j = 1; j <= i; j++){
         cout << prt;
      }
      for (k = 1; k <= (i - 1); k++){
         cout << prt;
      }
      space++;
      cout << "\n";
   }
   space = 3;
   //printing the second incomplete diamond
   for (i = 2; i <= 5; i++){
      if ((i % 2) != 0){
         for (sp = space; sp >= 1; sp--){
            cout << " ";
         }
         for (j = 1; j <= i; j++){
            cout << prt;
         }
      }
      if ((i % 2) != 0) {
         cout << "\n";
         space--;
      }
   }
   return 0;
}