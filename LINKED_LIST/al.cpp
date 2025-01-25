#include<iostream>
using namespace std ;

class Node{

        public: 
            int data ; 
            Node *address ; 

};

Node* head = NULL ;// globally ....

//    while(address != NULL) {
//     cout<< address-> data ; 
//    }
   



int main(){

        Node *n1 = new Node(); 
            n1->data = 2 ; 
              Node *n2 = new Node(); 
            n2->data = 5 ; 
            
      Node *n3 = new Node(); 
            n3->data = 7 ; 
            head = n1  ; 
    n1->address = n2 ; 
    n2->address = n3 ;
    n3->address = NULL; 
            
    

            cout<< n2->data; 


    return 0 ; 
}