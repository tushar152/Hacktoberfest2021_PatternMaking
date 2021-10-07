import java.util.*;
public class HollowInvertedHalfPyramid
{
	public static void main (String []args) {
		Scanner sc=new Scanner(System.in);
		
		for(int i=1;i<=6;i++)
		{
			for(int j=6;j>=i;j--)
			{
				if(i==1 || j==6 || j==i)
				System.out.print("* ");
				else
				System.out.print("  ");
					
			}
			System.out.println();
		}
		
	}
}