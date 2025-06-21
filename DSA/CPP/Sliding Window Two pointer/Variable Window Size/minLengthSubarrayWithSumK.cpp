#include <bits/stdc++.h>
using namespace std;

void minLengthSubarrayWithSumK(vector<int>&arr, int n, int k){

   int left = 0, right = 0;
   int sum = 0;
   int len = INT_MAX;

   while(right < n){
        sum += arr[right];

        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }

        if (sum == k){
            len = min(len, right - left + 1);
        }
        right++;
   }
   cout << len;
}

int main(){

    int n, k;
    cin >> n >> k;

    vector <int> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    minLengthSubarrayWithSumK(arr, n, k);

    cout << "\n";
    return 0;
}