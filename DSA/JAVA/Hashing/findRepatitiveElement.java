//link: https://www.geeksforgeeks.org/problems/find-repetitive-element-from-1-to-n-1/1

public int findDuplicate(int[] arr) {
        
        int n = arr.length;
        
        Set <Integer> st = new HashSet<>();
        
        for (int i = 0; i < n; i++){
            
            int x = arr[i];
            
            // number is already present in my set
            // hence, this is our ans
            if (st.contains(x) == true){
                return x;
            }
            
            // number is not present in the set,
            // so please insert into set
            st.add(x);
        }
        
        return -1;
    }