import java.util.*;

public class Main {
    private static void swap(int[] arr, int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    private static void bubbleSort(int[] arr, int n){

        // After placing (N - 1) elements, remaining 1 element will be exactly on its position
        for (int pass = 1; pass <= n - 1; pass++){
            for (int j = 0; j < n - pass; j++){

                if (arr[j] > arr[j + 1]){
                    swap(arr, j, j + 1);
                }
            }
        }

        for (int it: arr){
            System.out.print(it + " ");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        bubbleSort(arr, n);
    }
}