import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int N = scan.nextInt();

        for (int i = 1; i < 10; i++)
            System.out.printf("%d * %d = %d\n", N, i, N * i);
    }
}