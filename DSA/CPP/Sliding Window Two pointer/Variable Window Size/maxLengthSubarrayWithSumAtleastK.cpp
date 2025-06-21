#include <bits/stdc++.h>
using namespace std;

void maxLengthSubarrayWithSumK(vector<int>&arr, int n, int k){

   int left = 0, right = 0;
   int sum = 0;
   int len = 0;

   while(right < n){
        sum += arr[right];

        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }

        if (sum >= k){
            len = max(len, right - left + 1);
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

    maxLengthSubarrayWithSumK(arr, n, k);

    cout << "\n";
    return 0;
}