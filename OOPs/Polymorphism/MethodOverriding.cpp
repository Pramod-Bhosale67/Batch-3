#include <bits/stdc++.h>
using namespace std;



class Person{

public:
   void info(){
     cout << "This is the info of the Person\n";
   }
};

class Yash: public Person{
public:
    
   void info(){
     cout << "This is the info of the Yash\n";
   } 
};

int main(){

   Yash yash;
   yash.info();




    cout << "\n";

    return 0;
}