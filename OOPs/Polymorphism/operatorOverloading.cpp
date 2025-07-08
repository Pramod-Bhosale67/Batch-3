#include <bits/stdc++.h>
using namespace std;


class Box{
    int lenght;
    double width;

public:
    // Box(){

    // }

    Box(int lenght = 0, double width = 0){
        this -> lenght = lenght;
        this -> width  = width;
    }

    // operator overloading -> +
    void operator +(Box rect){
        int Lenght = lenght + rect.lenght;
        double Width = width + rect.width;

        cout << Lenght << " " << Width;
    }

    Box operator -(Box rect){
        Box ans;
        ans.lenght = lenght - rect.lenght;
        ans.width = width - rect.width;
        return ans;
    }

    void info(){
        cout << lenght << " " << width;
    }
};


int main(){

    Box square(10, 20.5);
    Box rect(50, 50.5);
    cout << "Add\n";
    square + rect;

    Box ans = square - rect;
    cout << "\nSubstract\n";
    ans.info();

    cout << "\n";

    return 0;
}