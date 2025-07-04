#include <bits/stdc++.h>
using namespace std;

class Radius{
    int radius;
    int height;

public:
    Radius(int radius, int height){
        this -> radius = radius;
        this -> height = height;
    }



    void info(){
        cout << radius << " " << height << endl;
    }
};



int main(){

    Radius rectangle(10, 40);
    rectangle.info();


    cout << "\n";

    return 0;
}