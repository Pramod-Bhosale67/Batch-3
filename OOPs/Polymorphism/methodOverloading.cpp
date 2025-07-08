#include <bits/stdc++.h>
using namespace std;

class Person{

public:
    void info(int age){
        cout << "age of the person : " << age  << "\n";
    }

    void info(string name){
        cout << "Name of the person : " << name << " \n";
    }

    void info(double weight){
        cout << "weight of the person : " << weight << "\n";
    }
};

int main(){

   Person yash;

   yash.info(50);
   yash.info("Yash");


    cout << "\n";

    return 0;
}