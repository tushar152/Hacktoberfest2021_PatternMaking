#include <stdio.h>
int main()
{
    int i, j, n, count = 0, count1 = 0, k = 0;
    printf("Enter the number of rows :");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= n - i; ++j)
        {
            printf(" ");
            ++count;
        }

        while (k != 2 * i - 1)
        {
            if (count <= n - 1)
            {
                printf("*");
                ++count;
            }
            else
            {
                ++count1;
                printf("*");
            }
            ++k;
        }
        count1 = count = k = 0;

        printf("\n");
    }
    return 0;
}