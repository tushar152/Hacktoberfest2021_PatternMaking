package LOOPS;

import java.util.Scanner;

public class Break {
    public static void main(String[] args) {
             for (int i=0;i<=100;i++){
                 System.out.println(i);
                 if(i==55){
                     break;
                 }
             }
        System.out.println("Out Of Loop");
    }
}