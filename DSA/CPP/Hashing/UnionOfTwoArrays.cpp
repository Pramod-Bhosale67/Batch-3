#include <bits/stdc++.h>
using namespace std; 

// link  - https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card


int getTheUnionOfTwoArrays(int a[], int b[], int n, int m){

    set <int> st;

    for (int i = 0; i < n; i++)
        st.insert(a[i]);

    for (int i = 0; i < m; i++)
         st.insert(b[i]);


    return st.size();
}

int main() {
        
    int n = 7, m = 5;
    int a[] = {1, 3, 2, 1, 5, 6, 9};
    int b[] = {1, 2, 4, 7, 10};


    int ans = getTheUnionOfTwoArrays(a, b, n, m);
    cout << ans << "\n";


    return 0;
}