
// tree = tree ek non linear data structure he jo herarrical way me data ko store krta he ..
// binary tree = isme maximum 2 hi childrens ho sakte he ..

#include<iostream>
#include<queue>
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

//--------------------------------------------------------------------------------------------------------------
// level order traversal ...........

void levelOrderTraversal(node* root){
    cout<<endl ; 
    cout<<"level order traversal : "<<endl ; 
    // creating queue ..
    queue<node*> q ; 
    q.push(root); 

    while(!q.empty()){
        node* temp = q.front(); 
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



//-----------------------------------------------------------------------------------------------------------
int main (){


    node* root = NULL ; 

    // tree ko create kr rhe he ..
    root = builtree(root); 

//----------------------------------------------------------------------------------------------------

    //1 3 7 -1 -1 11 -1 5 17 -1 -1 -1 
    // calling level order traversal function ..
    levelOrderTraversal(root); 
//--------------------------------------------------------------------------------------------------------

return 0 ;
}