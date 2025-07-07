#include <bits/stdc++.h>
using namespace std;

//Single Inheritance : only one base class & one Derived class

// Base class
class Person{
    
protected:
    int age;
    string name;
};

// Derived
class Sushant: protected Person{
private:
    int salary;

public:
    Sushant(int salary){
        this -> salary = salary;
        age = 20;
        name = "Sushant";
    }

    void info(){
        cout << "Name of the Person : " << name << "\n";
        cout << "Age of the Person : " << age << "\n";
        cout << "Salary of the Person : " << salary << "\n";
    }

};



int main(){

    Sushant sushant(50000);
    sushant.info();


    cout << "\n";

    return 0;
}