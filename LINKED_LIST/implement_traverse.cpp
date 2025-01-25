
//  IMPLIMENTATION AND TRAVERSAL OF LINKED LIST .....................

#include<iostream>
using namespace std ;

// ek class create kri he ........
class Node{

        public:
        int value ; 
        Node* next ; 

// constructor ............
    Node(int v){
        value = v ; 
        next = NULL ; 
    }
}; 


// ek function banaya he list lo travel krne ke liye .........
void traverse(Node* head){
    Node* temp = head ;

// while loop jab tak temp nul ke barabar nhi ho jata jabtak chalega .....
    while (temp != NULL){
    cout<<temp->value <<"  " ; 
    temp = temp->next ; 
    }

}

int main ()
{

// creating new nodes ........
Node* node1 = new Node(5); 
Node* node2 = new Node(10);

// node ko link karayenge pointer ki help se ................
node1->next = node2 ; 
Node* head = node1 ; 

//calling traverse function through main function .................... 
traverse(head); 

return 0 ;
}