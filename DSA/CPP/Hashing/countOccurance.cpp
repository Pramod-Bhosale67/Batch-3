#include <bits/stdc++.h>
using namespace std;

void countTheOccurance(vector<int>&arr, int n){

    // {key, value} = {number, occurance}

    map<int, int> mp;

    // for (int i = 0; i < n; i++){
    //     mp[arr[i]]++;
    // }

    // traverse the array to count the occurance
    for (auto it: arr){
        mp[it]++;
    }

    // traverse the map, to print the occurance
    for (auto it: mp){
        cout << it.first << " -> " << it.second << "\n";
    }
}

int main(){

    int n;
    cin >> n;

    vector <int> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    countTheOccurance(arr, n);

    cout << "\n";
    return 0;
}