#include <bits/stdc++.h>
using namespace std;


int main(){

    int a, b;
    cin >> a >> b;

    int n = min(a, b);

    int ans;

    for (int i = 1;  i <= n; i++){

        // i should divide completly to both the numbers. A & B
        if (a % i == 0 && b % i == 0){
            ans = i;
        }
    }

    cout << "GCD(" << a << "," << b << ") : " << ans;


    cout << "\n";
    return 0;
}