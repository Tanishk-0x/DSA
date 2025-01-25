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
}; 


//-------------------------------------------------------------
//main function ... 

int main (){

    Trie *t = new Trie() ; 

    // insertingggg ..... 
    t->insertWord("HEYY") ; 


    return 0 ; 
}