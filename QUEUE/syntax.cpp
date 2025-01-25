#include<iostream>
#include<queue>
using namespace std ;
int main ()
{
   // DECLARATION OF QUEUE.................
    queue<int>q ; 

   // INSERT VALUES IN QUEUE ...............
    q.push(11);
       q.push(15);
          q.push(17);

// PRINTING THE SIZE OF QUEUE.........
cout<<"the size is : "<<q.size()<<endl; 

// REMOVE ELEMENT USING POP .............. 
q.pop();
cout<<"the size is : "<<q.size()<<endl; 

// PRINTING THE FRONT OF QUEUQ=E ..........................
cout<<"the front is : "<<q.front()<<endl;

// CHECKING QUEUE IS EMPTY OR NOT ..........
if(q.empty()){
    cout<<"queue is empty"<<endl ; 
}
else{
    cout<<"not empty"<<endl ; 
}

return 0 ;
}
