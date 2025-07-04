#include <bits/stdc++.h>
using namespace std;

// Encapsulation is binding of data members and 
// member functions which is performing the operation on data members into single unit.

// each member function should have atleast 1 data member declared in the class


class Square{
    int lenght;
    int breadth;

public:
    Square(int lenght, int breadth){
        this -> lenght = lenght;
        this -> breadth = breadth;
    }

    void printTheSquare(){
        int height = 49;
        int sq = lenght * height;
        cout << sq << " ";
    }

    void printTheVolume(){
        int height = 39;

        int vol = height * breadth;
        cout << vol;
    }

    void info(){
        cout << lenght << " " << breadth;
    }
};

int main(){

    Square rectange(10, 30);
    rectange.printTheSquare();

    cout << "\n";

    return 0;
}