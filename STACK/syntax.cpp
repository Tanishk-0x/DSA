#include<iostream>
#include<stack>
using namespace std ; 
int main (){

// DECALARATION OF STACK ..........
stack<int> s; 

//INSERT VALUES USING stackname.push(element); 
// s.push(5); 
// s.push(8); 
s.push(7);
//  s.push(2); 


// // BEFORE POP ....
// cout<<"top element : "<<s.top()<<endl; 

// s.pop(); 
// s.pop(); 
// s.pop(); 
// s.pop(); 
// cout<<" after pop top element : "<<s.top()<<endl; 

if(s.empty()){
    cout<<"stack is empty";
}

else{
    cout<<"stack is not empty"; 
}

    return 0 ; 
}