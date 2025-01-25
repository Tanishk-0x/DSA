#include<iostream>
using namespace std ;

class TrieNode {

    public: 
        char data ; 
        TrieNode* children[26] ; 
        bool isTerminal ; 

        TrieNode(char ch){

            data = ch ; 
            for(int i=0 ; i<26 ; i++){
                children[i] = NULL ; 
            }
            isTerminal = false ; 
            
        }
}; 

//-----------------------------------------------------------------------
// insertion .. 

class Trie{

    public:
    TrieNode* root ; 

    // constructor ... 
    Trie(){
        root = new TrieNode('\0') ; 
    }
    

    void insertUtils(TrieNode* root , string word){
        // base case .. 
        if(word.length() == 0 ){
            root->isTerminal = true ; 
            return ; 
        }

        // asuming the words are in the caps .. 
        int index = word[0] - 'A' ; 

        TrieNode* child ; 
        
        // present case .. bss age badh jao .. 
        if( root->children[index] != NULL ){
            child = root->children[index] ; 
        }
        // absent wala case ... create kr do .. 
        else{
            child = new TrieNode(word[0]) ; 
            root->children[index] = child ; 
        }

        // Recursion sambhal lega .. 
        insertUtils(child , word.substr(1)) ; 
    }



    void insertWord(string word){
        insertUtils(root , word) ; 
    }

//-------------------------------------------------------------------------
// --------------------------------------- search ------------------------ 

    bool searchUtils(TrieNode* root , string word){

        // base case .. 
        if(word.length() == 0 ){
            return root->isTerminal ; 
        }
        
        int index = word[0] - 'A' ; 

        TrieNode* child ; 

         // present wala case ..    
        if( root->children[index] != NULL ){
            child = root->children[index] ; 
        }
        // absent wala case .. 
        else{
            return false ; 
        }

        // Recursion.....
        return searchUtils( child , word.substr(1) ) ;  
    } 



    bool searchWord(string word){

        return searchUtils( root , word ) ;  // callinggg.... 

}



}; 
//------------------------------------------------------------------------


int main (){

    Trie *t = new Trie() ; 

    t->insertWord("HEYY") ; 

    cout<<"present he ya nhi : "<< t->searchWord("SEYY") ; // searching ... 

    return 0 ; 
}