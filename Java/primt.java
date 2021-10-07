package LOOPS;

import java.util.Scanner;

public class primt {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        boolean isPrime = true;
        for(int i=2;i<num;i++){
            if(num%i==0){
                isPrime = false;
                break;
            }

        }
        if(num<2) isPrime=false;
        System.out.println("isPrime" +isPrime);
    }
}