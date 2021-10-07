// Program in Java to print Floyd's triangle

/* Output :-
Enter number of rows : 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
*/

import java.util.*;
class Main {

	public static void main(String[] args)
	{
	    Scanner obj = new Scanner(System.in);

		System.out.print("Enter number of rows : ");
		int n = obj.nextInt();

		int i, j, k = 1;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				System.out.print(k + " ");
				k++;
			}
			System.out.println();
		}
	}
}