#include <bits/stdc++.h>
using namespace std;

int findTheSecondLargestElementInArray(int arr[], int n){
    sort(arr, arr + n); // this is a STL function to sort the array

    for (int i = n - 2; i >= 0; i--){

        // check if two elements are different, then return i / arr[i]
        if (arr[i] != arr[i + 1]){
            return arr[i];
        }
    }

    return -1;

}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int secondLargestElement = findTheSecondLargestElementInArray(arr, n);

    cout << secondLargestElement;

    cout << "\n";
    return 0;
}