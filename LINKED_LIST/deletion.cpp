
// deletion operation ................

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

//------------------------------------------------------ DELETION IN LINKED LIST -----------------------------------------------------------------    

// deletion a node from start .................

void deleteatstart(Node* &head){
    // if condition to check is list is empty or not ..
       if(head==NULL){
        return ; 
       }

    Node* temp = head ; 
    head = head->next ; 

    // fiinally delete ....
    free(temp);    
}

//-------------------------------------------------------------------------------------------------------------------------------------------------

// deletion of node from end ................

void deleteatend(Node* &head){

    if (head==NULL){
        return ; 
    }

    if(head->next == NULL){
        deleteatstart(head); 
        return ; 
    }

// creating a new node ...........
Node* secondlastnode = head ; 

            while (secondlastnode->next->next != NULL)
            {
                secondlastnode = secondlastnode->next ; 
            }

    Node* lastnode = secondlastnode->next; 
    secondlastnode->next = NULL; 

    free(lastnode);         

}

//-----------------------------------------------------------------------------------------------------------------------------------------------
// deleting a node from the middle ....................

void deleteatmiddle(Node* &head , int position){

    if(position==1){
        deleteatstart(head); 
        return ; 
    }

    Node* prev = head ; 
    int count = 1 ; 

            while (count<(position-1))
            {
                prev = prev->next ; 
                count++ ; 
            }
     // prev is pointing at node at position - 1 .................
     Node* curr = prev->next ; // node to be deleted ......
     prev->next = curr->next ; 

            free(curr);        
}

//----------------------------------------------------------------------------------------------------------------------------------------------


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
cout<<endl ; 

//----------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------
// function call for deletion ................

// print after deleted at start.......
deleteatstart(head); 
traverse(head);
cout<<endl ;  

//-----------------------------------------------------------------------------------------------------------------------------------------------

//print after deleting at end .......
deleteatend(head); 
traverse(head);
cout<<endl ;  

//-------------------------------------------------------------------------------------------------------------------------------------------------

// print after deleting at middle or at certain position .......
deleteatmiddle(head , 2 );
traverse(head);
cout<<endl ;

//--------------------------------------------------------------------------------------------------------------------------------------------------
return 0 ;
}