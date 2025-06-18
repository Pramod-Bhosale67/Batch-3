 
 // link: https://www.geeksforgeeks.org/problems/find-repetitive-element-from-1-to-n-1/1

 int findDuplicate(vector<int>& arr) {
        
        int n = arr.size();
        
        set <int> st;
        
        for (int i = 0; i < n; i++){
            int x = arr[i];
            
            // check if num. is present in the 
            // set or not
            if (st.find(x) != st.end()){
                return x;
            }
            
            // if not, insert into the set
            st.insert(x);
        }
        
        return -1;
        
    }