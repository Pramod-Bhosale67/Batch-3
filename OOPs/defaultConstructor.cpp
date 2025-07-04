#include <bits/stdc++.h>
using namespace std;


class Student{
private:
    int age;
    string name;
    string branch;

public:
    Student(){
        age = 20;
        name = "Harsh";
        branch = "CSE";
    }

    void informationOfPerson(){
        cout << "Name of the Student: " << name << "\n";
        cout << "Age of the Student: " << age << "\n";
        cout << "Branch of the Student: " << branch << "\n";
    }
};

int main(){


    Student harsh;
    harsh.informationOfPerson();

    cout << "\n";

    Student yash;
    yash.informationOfPerson();


    cout << "\n";

    return 0;
}