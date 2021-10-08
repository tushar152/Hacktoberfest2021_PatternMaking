#include <stdio.h>
#include<math.h>

int main(void) {
    int i,j;
    printf("The pattern is as follows\n");
	for(i=-6;i<=6;i++)
	{
	    for(j=-6;j<=6;j++)
	    {
	        if((abs(i)+abs(j))>=6)
	        {
	            printf("*");
	        }
	        else
	        printf(" ");
	    }
	    printf("\n");
	}
	return 0;
}

/*OUTPUT

The pattern is as follows
*************
****** ******
*****   *****
****     ****
***       ***
**         **
*           *
**         **
***       ***
****     ****
*****   *****
****** ******
*************


*/
