import java.util.Scanner;

public class Q33 {
    public static void main(String[] args) {
        Scanner pth = new Scanner(System.in);
        int a;

        System.out.print("Enter number: ");
        a = pth.nextInt();

        for (int i = a; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
