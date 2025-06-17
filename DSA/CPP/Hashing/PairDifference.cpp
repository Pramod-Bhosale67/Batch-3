#include <bits/stdc++.h>
using namespace std; 

// link - https://www.geeksforgeeks.org/problems/pairs-with-difference-k1713/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card


int getContOfPairs(int arr[], int n, int k){

    map <int, int> hash;

    for (int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    int cnt = 0;


    /*
        find = two numbers x, y such that abs(x - y) = k

        x - y = k
        x = k + y;

        now check, if x is present in my map or not.

    */


    for (int i = 0; i < n; i++){
        int x = k + arr[i];

        if (hash.find(x) != hash.end()){
            cnt = cnt + hash[x];
        }
    }

    return cnt;
}

int main() {
        
    int n = 5;
    int k = 3;

    int arr[] = {1, 5, 3, 4, 2};

    int ans = getContOfPairs(arr, n, k);
    cout << ans << "\n";


    return 0;
}