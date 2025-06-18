// link: https://www.geeksforgeeks.org/problems/intersection-of-two-arrays-with-duplicate-elements/1

 vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        
        set <int> st;
        
        // step 1: insert the elements of any of the
        // array into the set, lets put of array b
        
        for (auto it: b){
            st.insert(it);
        }
        
        vector <int> ans;
        
        // traverse the remaining array & check if it is
        //present in the set or not, if yes, take it & remove from the set
        for (auto it: a){
            
            // check if it is present in the set or not
            if (st.find(it) != st.end()){
                // it is present
                ans.push_back(it);
                
                // please remove from the set
                st.erase(it);
            }
        }
        
        return ans;
    }