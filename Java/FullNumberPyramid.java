import java.util.*;

public class FullNumberPyramid {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        pattern(n);
        sc.close();
    }

    private static void pattern(int n) {
        for (int row = 1; row <= n; row++) {
            for (int s = 1; s <= 2 * n - 2 * row; s++) {
                System.out.print(" ");
            }
            for (int col = row; col <= 2 * row - 1; col++) {
                System.out.print(col + " ");
            }
            for (int col = 2 * row - 2; col >= row; col--) {
                System.out.print(col + " ");
            }
            System.out.println();
        }
    }
}
