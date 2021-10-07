

 
#include <stdio.h>
 
 
void printHutStar(int n)
{
    int i, j;
 
    for (i = 0; i < n; i++) {
 
        for (j = i + 1; j < n; j++)
            printf(" ") ;
 
        for (j = 0; j < (2 * i + 1); j++)
            printf("*");
 
        printf("\n") ;
    }
 
    for (i = 0; i < 3; i++) {
 
        for (j = 0; j < 3; j++)
            printf("*") ;
 
        for (j = 0; j < (2 * n - 7); j++)
            printf(" ") ;
 
        for (j = 0; j < 3; j++)
            printf("*") ;
 
        printf("\n") ;
    }
}
 
 
int main()
{
int n = 7;
 
    printHutStar(n);
 
return 0;
}
