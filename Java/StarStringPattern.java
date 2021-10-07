/*

Enter the string =
ABCDE
A A A  
 BBB
ABCDE
 DDD
E E E

*/
import java.util.Scanner;
class Pattern1
{
public static void main (String args[])
{
Scanner sc=new Scanner(System.in);
int sp,l;
System.out.println("Enter the string =");
String s = sc.nextLine(); 
l=s.length();
for(int i=0;i<l;i++)
if(i==l/2) 
System.out.println(s); 
else 
{
sp=Math.abs((l/2)-i); 
for(int j=sp;j<l/2;j++) 
System.out.print(" "); 
int k=0;
while(k<3)
{
System.out.print(s.charAt(i)); 
for(int j=0;j<sp-1;j++)
System.out.print(" ");
k++;
}
System.out.println(" ");
}
}
}
