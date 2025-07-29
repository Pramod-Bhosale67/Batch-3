#include <bits/stdc++.h>
using namespace std;


int partition(int arr[], int start, int end){

    int pivotIndex = start;
    int pivotElem = arr[start];

    // left side of pivot  >= privotELement
    // right side of pivot < privotElement

    while(start <= end){

        if (arr[start] <= pivotElem){
            start++;
        }

        else if (arr[end] > pivotElem){
            end--;
        }

        else{
            swap(arr[start], arr[end]);
        }
    }

    swap(arr[pivotIndex], arr[end]);
    return end;

}

// 2 5 3 1 6 8 9 7

void quickSort(int arr[], int start, int end){

    // signle is always sorted
    if (start >= end) 
        return; 

    int index = partition(arr, start, end);

    //  index = 5 - first element in its correct position
    // what about elements from 0 - index - 1 & index  + 1, to n - 1
    quickSort(arr, start, index - 1);
    quickSort(arr, index + 1, end);

}


int main(){

    int n = 8;
    int arr[] = {7, 4, 2, 1, 0, 9, 3, 6};

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    quickSort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";



    return 0;
}