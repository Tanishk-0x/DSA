#include<iostream>
using namespace std ;

class Node{

        public: 
            int data ; 
            Node *address ; 

};

Node* head = NULL ;// globally ....

void traverse(Node* head){
    Node current = head ; 

    while (current != NULL)
    {
        cout<< current-> data<<"  "; 
        current = current -> address ;
    }
    
}



int main(){

        Node *n1 = new Node(); 
        n1->data = 15 ; 


        head = n1  ; 
        n1->address = n2 ; 
        n2->address = n3 ;
         n3->address = NULL; 
            
        traverse(head);     
    


    return 0 ; 
}