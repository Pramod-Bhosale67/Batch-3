#include <bits/stdc++.h>
using namespace std;

void printMinimumFromSubarray(vector<int>&arr, int n, int k){

    map <int, int> mp;

    //step 1: perfrom the operations on first k elements
    for (int i = 0; i < k; i++){
        mp[arr[i]]++;
    }

    // print the min element from first subarray of size k
    int min = (*mp.begin()).first;
    cout << min << " ";

    //step 2: start from kth elements and move forward
    // remove the out of window element & add the curr element

    for (int i = k; i < n; i++){
        //remove the out of window element
        int out = arr[i - k];
        mp[out]--;

        if (mp[out] == 0){
            mp.erase(out);
        }

        //add the curr element
        int curr = arr[i];
        mp[curr]++;

        min = (*mp.begin()).first;
        cout << min << " ";

    }
}

int main(){

    int n, k;
    cin >> n >> k;

    vector <int> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    printMinimumFromSubarray(arr, n, k);

    cout << "\n";
    return 0;
}