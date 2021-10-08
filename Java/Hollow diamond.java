//Hollow Diamond
// 6
//      *
//     * *
//    *   *
//   *     *
//  *       *
// *         *
//  *       *
//   *     *
//    *   *
//     * *
//      *

import java.util.Scanner;  
public class Main  
{  
    public static void main(String args[])  
    {  
        int r, i, j, k = 1;
        Scanner sc=new Scanner(System.in);
        r=sc.nextInt();
        k = r - 1;
        for (j = 1; j <= r; j++)
        {
            for (i = 1; i <= k; i++)
            {
                System.out.print(" ") ;
            }
            k--;
            System.out.print("*");
            for (i = 2; i < 2 * j - 1; i++)
            {
                System.out.print(" ");
            }
            if (j > 1)
                System.out.print("*");
            System.out.println();
        }
        k = 1;
        for (j = 1; j <= r - 1; j++)
        {
            for (i = 1; i <= k; i++)
            {
                System.out.print(" ") ;
            }
            k++;
            System.out.print("*");
            for (i = 2; i < 2 * (r - j) - 1; i++)
            {
                System.out.print(" ");
            }
            if (j < r - 1)
                System.out.print("*");
            System.out.println();
        }
    }  
} 