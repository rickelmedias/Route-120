import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextInt()) {
            int v = scanner.nextInt();
            int t = scanner.nextInt();

            int displacement = v * t * 2;
            System.out.println(displacement);
        }

        scanner.close();
    }
}