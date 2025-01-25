
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
// code for  INorder traversal ..

void inorder(Node* root){
    // base case ...
    if(root==NULL){
        return; 
    }

    // applying L N R ...
    inorder(root->left); // L = left me jaaao ..

    cout<<root->data<<"  " ; // N = print krdo ..

    inorder(root->right); // R = right me jaaa0 ..
}
//--------------------------------------------------------------------------------------------------------------------------------------
// code for  PREORDER traversal ..
void preorder(Node* root){
    // base case ..
    if(root==NULL){
        return ; 
    }

    // applying N L R ...

    cout<<root->data<<"  " ; // N 

    preorder(root->left); // L 

    preorder(root->right); // R 
}
//--------------------------------------------------------------------------------------------------------------------------------------
// code for POSTORDER traversal ..

void postorder(Node* root){
    // base case ..
    if(root == NULL){
        return ; 
    }
    
    //applying L R N ...

    postorder(root->left); // L 

    postorder(root->right); // R 

    cout<<root-> data <<"  " ; // N 
}
//--------------------------------------------------------------------------------------------------------------------------------------
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
//--------------------------------------------------------------------------------------------------------------------------------------

int main (){

    cout<<"enter data to insert : "<<" " ; 

    Node* root = NULL ; 
    // calling takeinput function ..
    takeinput(root); 

    // calling level order traversal function ..
    cout<<"level order travel is : "<<"  " ; 
    levelOrderTraversal(root); // calllingggg ..
    cout<<endl ; 

    // calling inorder traversal ..
    cout<<"inorder travel is : "<<"  " ; 
    inorder(root); 
    cout<<endl ; 

    // calling preorder traversal ..
    cout<<"preorder travel is : "<<"  " ; 
    preorder(root); 
    cout<<endl ; 

    // calling postorder traversal ..
    cout<<"postorder traversal is : "<<"  "; 
    postorder(root); 
    cout<<endl ; 
    

//----------------------------------------------------------------------------------------------------------------------------------------

return 0 ;
}