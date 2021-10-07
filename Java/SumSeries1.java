package LOOPS;
import java.util.Scanner;

public class SumSeries1 {
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        float n = sc.nextInt();
        float result = 0f;
        for(float i = 1;i<=n;i++)
        {
            result += 1/i;
        }
        System.out.println(result);
    }

}
