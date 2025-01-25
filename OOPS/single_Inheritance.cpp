#include<iostream>
using namespace std  ;

// parent class .................
class animal{

public: 
    int age ; 
    int weight ; 

public: 
    void speak(){
        cout<<"speaking "<<endl ; 
    }
};

// class dog using properties of class animal .....
class dog : public animal {

};


int main () {

    dog d ; 
    d.speak(); 
    cout<<d.age<<endl ; 
    return 0 ; 
}