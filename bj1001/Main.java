import java.util.Scanner;

public class Main {

    public static int sub (int a, int b) {
        int res = a - b;
        return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println(sub(a, b));
    }
}