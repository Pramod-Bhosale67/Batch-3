#include <bits/stdc++.h>
using namespace std;

//  Base class
class A{
public:
    void info(){
        cout << "This is the info of the class A\n";
    }
};

//  base case
class B{
    public:
    void info(){
        cout << "This is the info of the class B\n";
    }
};

// derived
class C: protected A, protected B{

private:
    string name;

public:
    C(){
        name = "Pramod";
    }

    void infoOfC(){
        cout << "Name of the C: " << name <<endl;
    }

};


int main(){

    C c;
    c.info();


    cout << "\n";

    return 0;
}