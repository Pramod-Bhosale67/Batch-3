import java.util.*;

public class Main {
    private static void printAllSubarrays(int[] arr, int n){
        for (int i = 0; i < n; i++){

            for (int j = i; j < n; j++){

                //print all the elements in between i....j
                for (int k = i; k <= j; k++){
                    System.out.print(arr[k] + " ");
                }

                System.out.println();
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        printAllSubarrays(arr, n);
    }
}