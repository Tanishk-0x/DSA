#include<iostream>
#include<list>
using namespace  std ; 
int main (){
    //DECLARING LIST ...........
    list<int> l ; 


list<int> n(5,100); 
cout<<"printing n : "<<endl ; 
for(int i : n ){
    cout<< i <<"  "; 
}
cout<<endl ; 
//PUSH AND POP .............
l.push_back(1);
l.push_front(2);

for(int i:l){
    cout<<i<<"  ";
}
cout<<endl ;

// SIZE ...........
cout<<"size of list : "<<l.size()<<endl; 

// ERASE ..........
l.erase(l.begin());
cout<<"after erase : "<<endl ; 
for(int i:l){
    cout<<i<<"  ";
}
cout<<endl ;

// SIZE ..................
cout<<"size of list : "<<l.size()<<endl; 

return 0 ; 
}
