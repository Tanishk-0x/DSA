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

// class german inherit properties of class dog ........
class german : public dog {

};


int main () {

    german d ; 
    d.speak(); 
    cout<<d.age<<endl ; 
    return 0 ; 
}