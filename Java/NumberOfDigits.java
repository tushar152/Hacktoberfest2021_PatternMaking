package LOOPS;

import java.util.Scanner;

public class NumberOfDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n =sc.nextInt();
        int sum = 0;
        int numberOfDigits = (int)Math.log10(n);
        for (int i=0;i<=numberOfDigits;i++){
            int lastDigit = n%10;
            n/=10;
            sum += lastDigit;
            System.out.println(n+" "+lastDigit+" "+sum);

        }
        System.out.println(sum);
    }
}
