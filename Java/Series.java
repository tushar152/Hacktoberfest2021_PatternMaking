package LOOPS;
import java.util.Scanner;
import java.lang.Math;
public class Series {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int t = 3;

        for (int i = 0; i < 2; i++) {

            int a = in.nextInt();
            int b = in.nextInt();;
            int n = in.nextInt();;
            int total = 0;
            int result = 0;
            for (int j = 0; j < n; j++) {


                int pow = (int) Math.pow(2, j);
                result = a + pow * b + total;
                System.out.print(result+" ");
                total = result;
                a = 0;


            }
            System.out.println("");
        }
    }
}
