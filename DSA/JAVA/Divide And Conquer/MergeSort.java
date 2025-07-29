import java.util.ArrayList;

public class Main {
    public static void merge(int[] arr, int start, int mid, int end){

        int low = start;
        int high = mid + 1;

        ArrayList <Integer> temp = new ArrayList<>();

        while(low <= mid && high <= end){

            if (arr[low] <= arr[high]){
                temp.add(arr[low]);
                low++;
            }else{
                temp.add(arr[high]);
                high++;
            }
        }

        while(low <= mid){
            temp.add(arr[low]);
            low++;
        }

        while(high <= end){
            temp.add(arr[high]);
            high++;
        }

        for (int i = start; i <= end; i++){
            arr[i] = temp.get(i - start);
        }
    }

    public static void mergeSort(int[] arr, int start, int end){

        // single element - which cannot be divided
        if (start == end){
            return;
        }

        int mid = (start + end) / 2;


        mergeSort(arr, start, mid);   // left sub part
        mergeSort(arr, mid + 1, end); // right sub part

        // merge the both the parts
        merge(arr, start, mid, end);

    }


    public static void main(String[] args) {
        int n = 8;
        int[] arr = {7, 4, 2, 1, 0, 9, 3, 6};

        for (int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        mergeSort(arr, 0, n - 1);

        for (int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }

    }
}