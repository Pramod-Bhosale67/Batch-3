import java.util.Arrays;

public class QuickSortDemo {

    // Partition function
    public static int partition(int[] arr, int start, int end) {
        int pivotIndex = start;
        int pivotElement = arr[start];

        while (start <= end) {
            if (arr[start] <= pivotElement) {
                start++;
            } else if (arr[end] > pivotElement) {
                end--;
            } else {
                // Swap elements at start and end
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
            }
        }

        // Swap pivot with the correct position
        int temp = arr[pivotIndex];
        arr[pivotIndex] = arr[end];
        arr[end] = temp;

        return end; // Return the final position of the pivot
    }

    // QuickSort function
    public static void quickSort(int[] arr, int start, int end) {
        if (start >= end) {
            return;
        }

        int pivotPosition = partition(arr, start, end);
        quickSort(arr, start, pivotPosition - 1);
        quickSort(arr, pivotPosition + 1, end);
    }

    // Main function
    public static void main(String[] args) {
        int[] arr = {7, 4, 2, 1, 0, 9, 3, 6};

        System.out.println("Before Sorting:");
        System.out.println(Arrays.toString(arr));

        quickSort(arr, 0, arr.length - 1);

        System.out.println("After Sorting:");
        System.out.println(Arrays.toString(arr));
    }
}