#include<iostream>
using namespace std  ;

// parent class .................
class animal{

public: 
    int age ; 
    int weight ; 

public: 
    void bark(){
        cout<<"animal barking "<<endl ; 
    }
};


class human {
    public: 
    string color ; 

    public: 
    void speak(){
        cout<<" speaking human "<<endl ; 
    }

};
//multiple inheritance 
// hybrid class inherit both classes animal and human .......
class hybrid : public animal , public human {

};



int main () {

  hybrid object ; 
  object.speak(); 
  object.bark();

    return 0 ; 
}