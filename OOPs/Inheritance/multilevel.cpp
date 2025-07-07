#include <bits/stdc++.h>
using namespace std;

// A derived class is created from another derived class and that derived class 
// can be derived from a base class or any other derived class. 
// There can be any number of levels.

// Base Class
class Animal{
protected:
    string type;
};

// Derived Class
class Dog: protected Animal{
protected:
    string sound;
};

// Derived Class
class GoldenRetriver: protected Dog{
private:
    int wt;

public:
    GoldenRetriver(int wt){
        this -> wt = wt;
        type = "Golden Retriver";
        sound = "Bark";
    }

    void info(){
        cout << "Type of Dog: " << type << "\n";
        cout << "Sound of Dog: " << sound << "\n";
        cout << "Weight of Dog: " << wt << "\n";
    }
};




int main(){

    GoldenRetriver goldenRetriver(30);
    goldenRetriver.info();


    cout << "\n";

    return 0;
}