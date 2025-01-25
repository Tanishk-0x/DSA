
// QUEUE = FIRST IN FIRST OUT CONCEPT ..............

#include<iostream>
#include<queue>

using namespace std ; 
int main (){
// DECLARING QUQUE .........
queue<string> q ; 

//PUSH FOR INSERT ELEMENTS ..............
q.push("love");
q.push("babbar");
q.push("kumar");

// SIZE BEFORE POP .....
cout<<"size before pop -> "<<q.size()<<endl ;

// FRONT ELEMENT .............
cout<<"first element -> "<<q.front()<<endl ;

//AFTER POP (REMOVE ELEMENT)..........
q.pop(); 
cout<<"first element is -> "<<q.front()<<endl ;

cout<<"size after pop -> "<< q.size()<<endl;


    return 0 ;
}