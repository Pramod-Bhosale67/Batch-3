import java.util.*;

public class Main {
    private static void swap(int[] arr, int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    private static void selectionSort(int[] arr, int n){

        for (int i = 0; i < n; i++){
            int minNumber = arr[i];
            int indexOfMinNumber = i;

            for (int j = i + 1; j < n; j++){
                if (arr[j] < minNumber){
                    minNumber = arr[j];
                    indexOfMinNumber = j;
                }
            }
            swap(arr, i, indexOfMinNumber);
        }

        for (int it: arr){
            System.out.print(it + " ");
        }
        System.out.println();

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        selectionSort(arr, n);
    }
}