
// tree = tree ek non linear data structure he jo herarrical way me data ko store krta he ..
// binary tree = isme maximum 2 hi childrens ho sakte he ..

#include<iostream>
using namespace std ;

//----------------------------------------------------------------------------

    class node {
        public:
        int data ; 
        node* left; 
        node* right; 

     // constructor banayenge .....
     node(int d){
        this->data = d; 
        this->right = NULL; 
        this->left = NULL;
     }   
    };

//---------------------------------------------------------------------------------------------------------
// function jo tree ko create krega ..

node* builtree(node* root){
    cout<<"enter the data : "<<endl ; 
    int data ; 
    cin>>data; 
    root = new node(data); 

    // condition agar data -1 he to NULL matlab aage kuch nhi he ..
    if(data == -1){
        return NULL; 
    }
    
    // creating left ..
    cout<<"enter data for insert in left of : "<<data<<endl ; 
    root-> left = builtree(root->left); 
    
    //creating right ..
    cout<<"enter data for insert in right of : "<<data<<endl ; 
    root->right = builtree(root->right); 
}

//------------------------------------------------------------------------------------------------------------
// postorder traversel ...
void postorder(node* root){
    // base case ..
    if(root == NULL){
        return ; 
    }
    
    //applying L R N ...

    postorder(root->left); // L 

    postorder(root->right); // R 

    cout<<root-> data <<"  " ; // N 
}


//--------------------------------------------------------------------------------------------------------------

int main (){


    node* root = NULL ; 

    // tree ko create kr rhe he ..
    root = builtree(root); 

    // calling postorder function ...
    postorder(root); 


return 0 ;
}