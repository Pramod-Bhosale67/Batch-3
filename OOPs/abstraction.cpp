#include <bits/stdc++.h>
using namespace std;

// ABstraction

class Square{
    int lenght;
    int height;
    int breadth;

public:
    Square(int lenght, int breadth){
        this -> lenght = lenght;
        this -> breadth = breadth;
        height = 40;
    }

    void info(){
        int sq = lenght * breadth * height;
        cout << sq;
    }

    void square(){
        int v = 19;
        cout << 188 * v;
    }
    
};

int main(){

    Square rectange(10, 30);

    rectange.info();




    cout << "\n";

    return 0;
}