#include <bits/stdc++.h>
using namespace std;

// base class
class A{
public:
    A(){
        cout << "Im in the class A\n";
    }
};

// base class
class B{
public:
    B(){
        cout << "Im in the class B\n";
    }
};

// base class
class E{
public:
    E(){
         cout << "Im in the class E\n";
    }
};

// Dervied class
class C: protected A, protected B, protected E{
public:
    C(){
        cout << "Im in the class C\n";
    }
};



int main(){

    C c;


    cout << "\n";

    return 0;
}