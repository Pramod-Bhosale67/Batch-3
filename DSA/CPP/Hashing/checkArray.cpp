#include <bits/stdc++.h>
using namespace std; 


//link - https://www.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card


bool checkEqualityOfTwoArrays(int a[], int b[], int n){

    //first sort the array
    sort(a, a + n);
    sort(b, b + n);

    for (int i = 0; i < n; i++){

        if (a[i] != b[i])
        {
            return 0;
        }

    }

    return true;

}

int main() {
        
    int n = 7;
    int a[] = {1, 3, 2, 1, 5, 6, 9};
    int b[] = {1, 2, 3, 6, 9, 5, 1};


    bool ans = checkEqualityOfTwoArrays(a, b, n);

    cout << (ans ? "Yes" : "No");


    return 0;
}