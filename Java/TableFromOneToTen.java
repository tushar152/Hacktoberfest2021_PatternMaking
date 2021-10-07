package LOOPS;

import java.util.Scanner;

public class TableFromOneToTen {
    public static void main(String[] args) {
      for(int n=1;n<=5;n++){
          for(int i=1;i<=10;i++){
              int result = n*i;
              System.out.print(result+" " +
                      "");
          }
          System.out.println();
      }
    }
}
