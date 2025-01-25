#include<iostream>
using namespace std ;

// ek class animal banayi .....
class animal {

    public:
    void speak(){
        cout<< " speaking " << endl ;
    }
};

// class dog use kr rhi he class animal ki properties ko ........
class dog : public animal{
    public:
     void speak(){
        cout<< " barking " << endl ;
    }

};

int main ()
{
    dog object ; 
    object.speak(); 
return 0 ;
}