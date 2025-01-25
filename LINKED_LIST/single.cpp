#include<iostream>
using namespace std ;

class Node{

    public:
    int data ; // data of linked link ...
    Node* next ; // address of next node stored ............

    // constructor ............
    Node(int data){
        this -> data = data ; 
        this -> next = NULL ; 
    }
};

void insertathead(Node* &head , int d ){
    // new node ko create kr liya he ..
    Node* temp = new Node(d);
    temp -> next = head ;
    head = temp ;  
    }

 void print(Node* &head){
    Node* temp = head ; 

    while(temp != NULL){
        cout<< temp -> data <<" "; 
        cout<< temp -> next ; 
    }
    cout<<endl ; 
 }   


int main ()
{

    Node* node1 = new Node(15); 
    
    // cout<<node1 -> data <<endl ;
    // cout<<node1 -> next <<endl ; 

    // head pointed to node 1  ..
    Node* head = node1 ; 
    print(head);

    insertathead(head , 12); 
    print(head); 


return 0 ;
}