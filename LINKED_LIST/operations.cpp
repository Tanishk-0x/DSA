
// operation insert , delete , travel .................

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

//------------------------------------------------------------------------------------------------------------------------------------------------

// adding or insert a node at start .............
void insertatstart(Node* &head , int val ){
    // CREATING A NEW NODE ...........
    Node* newNode = new Node(val); 
    newNode -> next = head ; 
    head = newNode ; 
}

//-------------------------------------------------------------------------------------------------------------------------------------------------

// adding or insert a node at end .............
void insertatend(Node* head , int val){
    // CREATING A NEW NODE ............
    Node* newNode = new Node(val); 
    Node* temp = head ; 

            while (temp->next != NULL)
            {
                temp = temp -> next ; 
            }
    // now temp is pointed to the last node ...........
        temp -> next = newNode;         
}

//-----------------------------------------------------------------------------------------------------------------------------------------------
// adding or insert a note at middle ........
void insertatmiddle(Node* head , int val , int position ){
    // creating a new node .......
    Node* newNode = new Node(val); 

    Node* prev = head ; 
    int count = 0 ; 

            while (count<(position-1))
            {
                prev = prev->next ; 
                count++ ; 
            }
   // prev i s pointing to node before the new node ............
   newNode->next = prev->next ;
   prev->next = newNode;            
}

//--------------------------------------------------------------------------------------------------------------------------------------------------

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
cout<<endl ; 

//-----------------------------------------------------------------------------------------------------------------------------------------------
// print after insert an element at start ..............
insertatstart(head,23);
traverse(head); 
cout<<endl ; 

//-----------------------------------------------------------------------------------------------------------------------------------------------
// print after insert an element at end ............
insertatend(head,92); 
traverse(head); 
cout<<endl ; 

//----------------------------------------------------------------------------------------------------------------------------------------------
// print after insert an element at middle .........
insertatmiddle(head, 75 , 2); 
traverse(head); 

//----------------------------------------------------------------------------------------------------------------------------------------------

return 0 ;
}