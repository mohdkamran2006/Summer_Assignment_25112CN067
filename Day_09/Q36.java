public class Q36 {
    public static void main(String[] args) {
        int rows = 5;    // Total number of rows
        int columns = 6; // Total number of columns


        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= columns; j++) {
                if (i == 1 || i == rows || j == 1 || j == columns) {
                    System.out.print("*");
                } else {
                    // Print spaces for the inside hollow part
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
