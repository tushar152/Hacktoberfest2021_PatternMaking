// Program in C to print Floyd's triangle

/* Output :-
Enter number of rows : 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
*/

#include <stdio.h>
int main()
{
  int n, i,  c, a = 1;

  printf("Enter number of rows : ");
  scanf("%d", &n);

  for (i=1; i<=n; i++)
  {
    for (c=1; c<=i; c++)
    {
      printf("%d ", a);
      a++;
    }
    printf("\n");
  }

  return 0;
}