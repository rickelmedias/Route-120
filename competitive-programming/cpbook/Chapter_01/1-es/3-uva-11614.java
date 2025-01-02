import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Integer t = scanner.nextInt();
        Double n, a, b, c, k, delta;

        while (t-- != 0) {
            n = scanner.nextDouble();
            a = 1.0;
            b = 1.0;
            c = -2.0 * n;

            delta = Math.pow(b, 2.0) - (4.0 * a * c);
            k = (((-b) + Math.sqrt(delta))) / (2.0 * a);

            System.out.println(k.intValue());
        }

        scanner.close();
    }
}