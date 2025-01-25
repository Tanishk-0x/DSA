#include<iostream>
#include<queue>
#include<algorithm>
using namespace std ;

int main (){

    priority_queue<int> pq ; 

    pq.push(36) ; 
    pq.push(98) ; 
    pq.push(27) ; 
    pq.push(82) ; 
    pq.push(55) ; 

    cout<<"the top element is : "<<pq.top()<<endl ; 

    cout<<"the size is : "<<pq.size()<<endl ; 

    pq.pop() ; 
    cout<<"after pop : "<<pq.top()<<endl ; 

    if(pq.empty()){
        cout<<"empty he .. "<<endl ; 
    }
    else{
        cout<<"empty nhi he .. "<<endl ; 
    }


return 0 ;
}