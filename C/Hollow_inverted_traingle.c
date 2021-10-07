#include <stdio.h>

int main()
{
    int i, j;
    int rows =5;



    for(i=1; i<=rows; i++)
    {
        for(j=i; j<=rows; j++)
        {

            if(i==1 || j==i || j==rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}