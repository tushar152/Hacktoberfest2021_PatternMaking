package LOOPS;
import java.util.Scanner;
public class FibonacciNumbers {
    public static void main (String[] args){
    Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a =0;
        int b = 1;
        int c ;
        System.out.print(a+" "+b);//printing 0 and 1
        for (int i=0;i<n-2;i++){
            c=a+b;
            System.out.print( " "+c+" ");
            a=b;                 //Transfer value of b into a
            b=c;                 //Transfer value of c into b

        }
    }

}
