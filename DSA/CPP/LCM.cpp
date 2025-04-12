#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    int n = min(a, b);

    int ans;

    for (int i = 1;  i <= n; i++){

        // i should divide completly to both the numbers. A & B
        if (a % i == 0 && b % i == 0){
            ans = i;
        }
    }

    return ans;
}

int main(){

    int a, b;
    cin >> a >> b;

    int gcd = GCD(a, b);

    int lcm = (a * b) / gcd;

    cout << "LCM: " << lcm;




    cout << "\n";
    return 0;
}