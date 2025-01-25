
// BST  =  ek type of sorted binary tree hota he ..
// jiske left me sare nodes root notes se chote hote he aur right side me sare node root node se bade hote he ..
/*
         100
       /     \
      50      110        
     /  \         \             BST (binary search tree)  
    25   70       120
         /       /
        60        115 

*/

#include<iostream>
#include<queue>
using namespace std ;
    class Node {
        public: 
            int data ; 
            Node* left ; 
            Node* right ; 

        // constructor banayenge ...
        Node(int d){
            this->data = d ; 
            this->left = NULL ; 
            this -> right = NULL ; 
        }    
    };
//--------------------------------------------------------------------------------------------------------------------------------------
// code for level order traversal ..

void levelOrderTraversal(Node* root){
    cout<<endl ; 
    cout<<"level order traversal : "<<endl ; 
    // creating queue ..
    queue<Node*> q ; 
    q.push(root); 

    while(!q.empty()){
        Node* temp = q.front(); 
        cout<< temp -> data <<"  "; 
        q.pop(); 

        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
    }
}
//--------------------------------------------------------------------------------------------------------------------------------------
// BST ko create krne ke liye ek function banayenge ..
Node* insertintoBST(Node* root , int d){
    // base case ..
    if(root == NULL){
        root = new Node(d); 
        return root ; 
    }
   // compare krenge d ko root ke data ke sath .. 
   // agar d root ke data se bada he to right me insert krenge .. 
   // agar d root ke data se chota he to left me insert krenge ..
   
   if( d > root->data){
    // right part me jayenge .. 
    root->right = insertintoBST(root->right , d); 
   }
   else{
    // left part me jayenge ..
    root->left = insertintoBST(root->left , d); 
   }
   return root ; 
}
// ------------------------------------------------------------------------------------------------------------------------------------
// ek function banayenge input lene ke liye .. 
void takeinput(Node* &root){
    int data ; 
    cin>> data ; 
    // jab tak -1 na aa jaye jab tak input lete rh .. 
    while(data != -1){
        root = insertintoBST(root , data); 
        cin>>data; 
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------
// function banayenge minimum nikalne ke liye ..
Node* minNikaldo(Node* root){
    Node* temp = root ; 
    while(temp->left != NULL){          // Minimum humesa left most me hoga .. 
        temp = temp->left ; 
    }
    return temp ; 
}
//--------------------------------------------------------------------------------------------------------------------------------------
// function banayenge maximum  nikalne ke liye ..
Node* maxNikaldo(Node* root){
    Node* temp = root ; 
    while(temp->right != NULL){          // Maximum humesa right most me hoga .. 
        temp = temp->right ; 
    }
    return temp ; 
}
//--------------------------------------------------------------------------------------------------------------------------------------

int main (){

    Node* root = NULL ; 

    cout<<"enter data : "; 

    // calling takeinput function ..
    takeinput(root); 

    // calling level order traversal function ..
    levelOrderTraversal(root); 
    cout<<endl ; 

    // calling minNikaldo function ..
    cout<<"the minimum is : "<<"  "<<minNikaldo(root)->data ; 
    cout<<endl ; 

    // calling maxNikaldo function ..
    cout<<"the maximum is : "<<"  "<<maxNikaldo(root)->data ; 
    cout<<endl ; 

//----------------------------------------------------------------------------------------------------------------------------------------

return 0 ;
}