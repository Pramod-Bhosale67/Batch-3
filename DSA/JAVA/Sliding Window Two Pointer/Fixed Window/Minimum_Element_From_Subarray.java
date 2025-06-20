import java.util.*;

public class Main {
    private static void printMinimumFromSubarray(int[] arr, int n, int k){
        TreeMap<Integer, Integer> mp = new TreeMap<>();

        //step 1: perfrom the operations on first k elements
        for (int i = 0; i < k; i++)
            mp.put(arr[i], mp.getOrDefault(arr[i], 0) + 1);

        int min = mp.firstKey();
        System.out.println(min);

        // step 2: start from kth elements and move forward
        // remove the out of window element & add the curr element
        for (int i = k; i < n; i++){

            //remove the out of window element
            int out = arr[i - k];
            mp.put(out, mp.getOrDefault(out, 0) - 1);
            if (mp.get(out) == 0){
                mp.remove(out);
            }

            //add the curr element
            int curr = arr[i];
            mp.put(curr, mp.getOrDefault(curr, 0) + 1);

            //print the minimum element
            min = mp.firstKey();
            System.out.println(min);

        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        printMinimumFromSubarray(arr, n, k);
    }
}