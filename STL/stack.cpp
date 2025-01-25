
// STACK = FIRST IN LAST OUT CONCEPT ..........

#include<iostream>
#include<stack>


using namespace std ; 
int main (){
// DECLARING STACK ...............
stack<string> s ; 

// push ELEMENT DALNE KE LIYE .................
s.push("love");
s.push("babbbar");
s.push("kumar");

//SIZE OF STACK ............
cout<<"size is : "<< s.size() << endl ;

//PRINTING TOP ELEMENT ..........
cout<<"TOP ELEMENT IS : "<<s.top()<<endl ; 

// pop ELEMENT KO NIKALNE YA REMOVE KRNE KE LIYE .............................
s.pop(); 
cout<<"TOP ELEMENT IS : "<<s.top()<<endl ; 

// SIZE .........
cout<<"size is : "<< s.size() << endl ; 

//EMPTY OR NOT .............
cout<<"empty or not -> "<<s.empty()<<endl ; 

    return 0 ; 
}