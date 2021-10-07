package LOOPS;

import java.lang.Math;
import java.util.Scanner;
public class MultiplicationTable {
    public static void main (String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the no: ");
        int num = sc.nextInt();
//        char multi ='x';
//        char eq = '=';
        for (int i=0;i<=10;i++){

            int result = num*i;
            System.out.println( +num+"x"+i+"=" +result);
        }

        System.out.println("_____________");
        for (int i=0;i<=10;i++) {

            int result = num - i;
            System.out.println(+num + "-" + i + "=" + result);
        }

        System.out.println("_____________");
        for (int i=0;i<=10;i++) {

            int result = num + i;
            System.out.println(+num + "+" + i + "=" + result);
        }


        System.out.println("_____________");
        for (int i=0;i<=10;i++) {

            float result = (float) i/ num;
            System.out.println(+num + "/" + i + "=" + result);
        }

        System.out.println("_____________");
        for (int i=0;i<=10;i++) {

            int result = (int) Math.pow(num, i);
            System.out.println(+num + "^" + i + "=" + result);
        }
    }
}
