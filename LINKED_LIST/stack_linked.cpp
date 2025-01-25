#include<iostream>
using namespace std ;

struct Node{
    int val ; 
    Node* next ; 
}; 

class mystack {

    Node* head ; 
    int stacksize ; 

      public: 

// constructor banayenge ...
mystack(){
    head = NULL; 
    stacksize = 0 ; 
}

//--------------------------------------------------------------------
// push operation ...........       
    void push( int x ){
        Node* temp = new Node(); 
        temp->val=x ; 
        temp->next = head; 
        head = temp ; 

        cout<<"element" <<" " << x <<" "<< "insert in the stack "<<endl ;
        // size count ....
        stacksize++;  
    }

//----------------------------------------------------------------------
// using pop operation .......
    void pop(){

        if(head==NULL){
            cout<<"stack is empty can not pop"<<endl ; 
            return ; 
        }
        Node* temp = head; 
        head = temp->next; 
        temp->next = NULL ; 
        // deleting temp ...............
        delete temp ; 

        cout<<"element popped ... "<<endl ; 
        // size count ....
        stacksize--; 
    }

//------------------------------------------------------------------------
// using top operation ...............(returns the first element of the linked list ........
    int top(){
        if(head==NULL){
            cout<<"no top element stack is empty "<<endl ; 
            return -1;
        }

        cout<<"top element is present : " << head->val<<endl ; 
        return head->val ; 
    }

//-----------------------------------------------------------------------------
// using size operator ......    

/*approach = upar ek stacksize krke variable banaya he .. 
jab bhi koi element push ya* insert karenge tab stacksize ko 
++ kar denge or pop ke time pe stacksize ko -- kr denge  */
    int size(){

        cout<<"size of stack is : "<<stacksize<<endl ; 
            return stacksize ; 
    }

//---------------------------------------------------------------------
// using empty operator .........
    int empty(){
        if(head==NULL){
            cout<<"stack is empty .."<<endl ; 
            return 1 ; 
        }

      cout<<"stack is NOT empty "<<endl ;   
      return 0 ; 
    }

};

//-----------------------------------------------------------------------------

int main (){

    mystack s1; 

    s1.empty(); 

    s1.push(7); 

    s1.push(9); 

    s1.pop(); 

    s1.push(10); 

    s1.top(); 
    
    s1.size(); 

    s1.empty();

return 0 ;
}