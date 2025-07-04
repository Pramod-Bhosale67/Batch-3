#include <bits/stdc++.h>
using namespace std;

// private, public

class Student{

public:
    int age;
    string name;
    string branch;

    void informationOfPerson(){
        cout << "Name of the Student: " << name << "\n";
        cout << "Age of the Student: " << age << "\n";
        cout << "Branch of the Student: " << branch << "\n";
    }
};

int main(){

    Student yash;
    yash.name = "Yash";
    yash.age = 20;
    yash.branch = "CSE";

    yash.informationOfPerson();

    cout << "\n";

    Student harsh;
    harsh.age = 19;
    harsh.name = "Harsh";
    harsh.branch = "Civil";
    harsh.informationOfPerson();



    cout << "\n";

    return 0;
}