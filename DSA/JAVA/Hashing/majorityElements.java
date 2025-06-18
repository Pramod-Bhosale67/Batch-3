//link: // link: https://leetcode.com/problems/majority-element/

public int majorityElement(int[] nums) {
        
        int n = nums.length;

        Map <Integer, Integer> mp = new HashMap<>();

        // traverse the array & count the occ of 
        // each element from array
        for (int it: nums){
            mp.put(it, mp.getOrDefault(it, 0) + 1);
        }

        // traverse the map & check which no. is
        // occured more than (n / 2)
        // {key, value} - {num, occurance}
        for (Map.Entry<Integer, Integer> it: mp.entrySet()){
            int num = it.getKey();
            int occ = it.getValue();

            if (occ > n / 2){
                return num;
            }
        }

        return -1;

    }