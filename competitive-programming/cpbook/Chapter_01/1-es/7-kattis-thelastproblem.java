import java.util.Scanner;

class Main {

    public static void main(String[] str) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        System.out.println("Thank you, " + s + ", and farewell!");
        scanner.close();
    }
}