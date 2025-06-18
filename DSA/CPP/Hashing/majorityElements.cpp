// link: https://leetcode.com/problems/majority-element/submissions/1668527506/

int majorityElement(vector<int>& nums) {
        int n = nums.size();

        map<int, int> mp;

        for (auto it: nums){
            mp[it]++;
        }

        for (auto it: mp){
            int num = it.first;
            int occ = it.second;

            if (occ > n / 2)
                return num;
        }
        return -1;

    }