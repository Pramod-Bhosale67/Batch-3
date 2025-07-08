#include <bits/stdc++.h>
using namespace std;

class Demo{
public:
    void add(int x, int y){
        cout << x + y << "\n";
    }

    int add(int x, float y){
        return (x + y);
    }

    void add(double a, int b){
        cout <<  (a + b);
    }
};


int main(){

   Demo obj;
   // obj.add(10, 30);
   obj.add(10.5, 50);

    cout << "\n";

    return 0;
}