import java.util.*;

public class Main {
    private static void swap(int[] arr, int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    private static void insertionSort(int[] arr, int n){

       for (int i = 1; i < n; i++){
           int num = arr[i];
           int j = i - 1;

           while(j >= 0 && arr[j] > num){
               arr[j + 1] = arr[j];
               j--;
           }

           arr[j + 1] = num;
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

        insertionSort(arr, n);
    }
}