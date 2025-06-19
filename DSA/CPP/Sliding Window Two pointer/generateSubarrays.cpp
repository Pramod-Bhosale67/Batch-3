#include <bits/stdc++.h>
using namespace std;

void printAllSubarrays(vector<int>&arr, int n){

    for (int i = 0; i < n; i++){

        for (int j = i; j < n; j++){

            //print all the elements in between i....j
            for (int k = i; k <= j; k++){
                cout << arr[k] << " ";
            }

            cout << "\n";
        }
        cout << "\n";
    }
}

int main(){

    int n;
    cin >> n;

    vector <int> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    printAllSubarrays(arr, n);

    cout << "\n";
    return 0;
}