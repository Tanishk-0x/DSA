#include<iostream>
//HEADER FILE IN STL FOR USING DEQUE ...............
#include<deque>
using namespace std;
int main (){
    // DECLARATION OF DEQUE ...........
deque<int> d ; 
d.push_back(1); 
d.push_back(5); 
d.push_back(9); 
d.push_back(23); 
d.push_back(45); 
d.push_back(78); 
// PUSH_FRONT SE ELEMENT SABSE AAGE CHALEJAYEGA .................
d.push_front(92); 

//USING SIZE ..................
int size = d.size(); 
cout<<"size is : "<<size<<endl;
//FOR LOOP TO TRAVEL IN DEQUE..................
for(int i:d){
    cout<<i<<"  ";
}
cout<<endl ; 
// ELEMENT AT nTH INDEX .................
int n = 3 ; 
cout<<"element at "<<n<<" index : "<<d.at(n)<<endl;

// FRONT AND BACK USING = d.front() and d.back(); ...........
cout<<"front element is : "<<d.front()<<endl; 
cout<<"last element is : "<<d.back()<<endl ; 

cout<<"before pop : "<<endl; 
for(int i:d){
    cout<<i<<"  ";
}
cout<<endl ;

//USING POP_BACK TO REMOVE LAST ELEMENT ...............
d.pop_back();

cout<<"after pop : "<<endl ; 
for(int i:d){
    cout<<i<<"  ";
}
cout<<endl ; 
// CHECKING EMPTY OR NOT ..................
cout<<"empty or not -> "<<d.empty()<<endl ; 

cout<<"before erase -> "<<d.size()<<endl ; 
for(int i:d){
    cout<<i<<"  ";
}
cout<<endl ;

// ERASE FUNCTION =  dequename.erase(parameter) ; ...........
d.erase(d.begin() , d.begin()+1); 

cout<<"after erase -> "<<d.size()<<endl ; 
for(int i:d){
    cout<<i<<"  ";
}
cout<<endl ;

    return 0 ; 
}