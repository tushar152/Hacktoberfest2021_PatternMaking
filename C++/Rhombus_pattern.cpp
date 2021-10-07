/**
 * C program to print Rhombus star pattern series
 */

#include <stdio.h>

int main()
{
    int i, j;
    int rows = 5;

    /* Input number of rows from user */


    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<=rows - i; j++)
        {
            printf(" ");
        }

        /* Print stars after spaces */
        for(j=1; j<=rows; j++)
        {
            printf("*");
        }

        /* Move to the next line */
        printf("\n");
    }

    return 0;
}