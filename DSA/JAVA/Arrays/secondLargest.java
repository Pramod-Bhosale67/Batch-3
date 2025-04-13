import java.util.*;

public class Main {
   private static int findTheSecondLargestElementInArray(int[] arr, int n){
        Arrays.sort(arr); // this is a Arrays function to sort the array

        for (int i = n - 2; i >= 0; i--){
            // check if two elements are different, then return i / arr[i]
            if (arr[i] != arr[i + 1]){
                return arr[i];
            }
        }

        return -1;

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        int secondLargestElement = findTheSecondLargestElementInArray(arr, n);

        System.out.println(secondLargestElement);
    }
}