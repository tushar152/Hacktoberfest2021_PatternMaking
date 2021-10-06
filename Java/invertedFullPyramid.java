import java.util.*;
public class InvertedFullPyramid{
	public static void main (String []args) {
		Scanner sc=new Scanner(System.in);
		
		for(int i=1;i<=6;i++)
		{
			for(int k=1;k<i;k++)
			{
				System.out.print(" ");
			}
			for(int j=6;j>=i;j--)
			{
				System.out.print("* ");
			}
			System.out.println();
		}
		
	}
}