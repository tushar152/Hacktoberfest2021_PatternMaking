import java.io.*;
public class main1{
    public static void main(String args[]){
        int n=10; // print pryramid from 1 to 10 in incresing order
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++)
            System.out.print("*");
            System.out.println();
        }
    }
}
