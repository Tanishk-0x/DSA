#include<iostream>
using namespace std ;

class node{
    public: 
        int data ; 
        node* next ; 

   // constructor banayenge ...........
   node(int val){
    data = val ; 
    next = NULL ; 
   }     
};

class queue{

    node* front; 
    node* back ; 

  public: 
  //cosntructor banayenge .......
  queue(){
    front = NULL; 
    back = NULL ; 
  } 

// ------------------------------------------------ OPERATIONS PERFORM ------------------------------------------------------------------------
// push operation .......................
  void push(int x ){

        node* n = new node(x); 
                if(front == NULL){
                    back = n ; 
                    front = n ; 
                    return ; 
                }

         back->next = n ; 
         back = n ;        
       
  }

//-------------------------------------------------------------------------------------------------------------------------------------------------
// pop operation ................
void pop(){
    if(front==NULL){
        cout<<"queue is emptyy "<<endl ;  
        return ; 
    }

    node* todelete = front ; 
    front = front->next; 

    // deletinggggggggggg. 
    delete todelete ; 
}  

//------------------------------------------------------------------------------------------------------------------------------------------------
// peek operation ...............
int peek(){
    if(front==NULL){
        cout<<"no element is queue "<<endl ; 
        return -1 ; 
    }

    return front->data ;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------
// checking queue is empty or not ......
    bool empty(){
    if(front==NULL){
        return false ; 
    }
   return true ; 
    }

};

//----------------------------------------------------------------------------------------------------------------------------------------------------

int main (){


    queue q ; // creating q as object of queue class ....

// pushing elements in queue ....
            q.push(10); 
            q.push(15);
            q.push(17);
            q.push(25);



// printing peek element ...........
     cout<<"peak element is : "<<q.peek()<<endl ; 
// popping the element .......
         q.pop(); 

// one more time ...
         cout<<"peak element is : "<<q.peek()<<endl ; 

         q.pop(); 

// checking queue is empty or not .......................
         cout<<"empty or not :  "<<q.empty()<<endl ;        

    return 0 ;

}