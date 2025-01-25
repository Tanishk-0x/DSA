#include<iostream>
using namespace std ;

class student {
public: 
string name ; 
int roll; 
bool gender; 

void setroll(int n ){
    n = roll ; 
}

int getroll(){
    return roll; 
}

};

int main ()
{
student object;
object.setroll(72); 
cout<<"the roll is : " << object.getroll();  


return 0 ;
}