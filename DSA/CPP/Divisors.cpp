#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){

        // check if (n % i == 0)
        if (n % i == 0){
            cout << i << " ";
        }
    }

    cout << "\n";
    return 0;
}