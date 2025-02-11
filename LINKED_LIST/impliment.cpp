#include<iostream>
using namespace std ;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};


void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main ()
{

     //created a new node
    Node* node1 = new Node(16);
    //cout << node1 -> data << endl;
   // cout << node1 -> next << endl;
    
    //head pointed to node1
    Node* head = node1; 
    Node* tail = node1;

    //print(head);

   print(head); 

// inserting ..........
   insertAtHead(head , 12); 
     insertAtHead(head , 17); 
       insertAtHead(head , 19); 

       //calling print function 
   print(head); 

return 0 ;
}