#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end){

    int low = start;
    int high = mid + 1;

    vector <int> temp;

    while(low <= mid && high <= end){

        if (arr[low] <= arr[high]){
            temp.push_back(arr[low]);
            low++;
        }else{
            temp.push_back(arr[high]);
            high++;
        }
    }

    while(low <= mid){
        temp.push_back(arr[low]);
        low++;
    }

    while(high <= end){
        temp.push_back(arr[high]);
        high++;
    }

    for (int i = start; i <= end; i++){
        arr[i] = temp[i - start];
    }
}

void mergeSort(int arr[], int start, int end){

    // single element - which cannot be divided
    if (start == end){
        return;
    }

    int mid = (start + end) / 2;
    

    mergeSort(arr, start, mid);   // left sub part
    mergeSort(arr, mid + 1, end); // right sub part

    // merge the both the parts
    merge(arr, start, mid, end);

}

int main(){

    int n = 8;
    int arr[] = {7, 4, 2, 1, 0, 9, 3, 6};

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    mergeSort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";



    return 0;
}