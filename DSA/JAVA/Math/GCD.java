import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int n = Math.min(a, b);
        int ans = 1;

        for (int i = 1; i <= n; i++){

            // i should divide completly to both the numbers. A & B
            if (a % i == 0 && b % i == 0){
                ans = i;
            }
        }

        System.out.println("GCD: " + ans);
    }
}