
// implementing graph using Adjacency List 
// using Map to store first entity and second entity 
// first entity is a single type object so it can be int , string etc 
// here we use int as first entity 
// second entity is a list which contains the infornmation about connections of nodes 
// Class Graph consist of two functions one for addingEdges and second for printing '




#include<iostream>
#include<map>
#include<list>
#include<unordered_map>

using namespace std ;


// ye generic way he matlab kisi bhi tarah ka data dal sakte he .. 
// bss jha jha datatype int likha he uskoo T se replace krna he ..


//  template <typename T>

class Graph{

    public: 

        unordered_map<int , list<int> > adj ; 

        // ek function banayenge edge ko insert krne ke liye .. 

        void addEdge(int u , int v , bool direction ){

            // direction = 0 matlab undirected graph
            // direction = 1 matlab directed graph

            // create krenege edge u ----> v 
            adj[u].push_back(v) ; // edge bn gayi .. 

            // v -----> u jab hi ban skati he jab wo ek undirected graph ho 
            // matlab direction 0 ho .. 

            // check krenge direction ko .. 
            if( direction == 0 ){ // matlab undirected graph he .. 
                adj[v].push_back(u) ; 
            }

        }
        

        // print function .... 
        void printAdjacencyList(){
           for (auto i: adj){

                cout<<i.first<< "->" ; 

                for (auto j: i.second){
                    cout<< j << " , " ; 
                }
                cout<<endl ; 
           }
            
        }
};

//-------------------------------------------------------------------------



int main (){
    
    int n ; // number of nodes .. 
    cout<<"enter the number of nodes"<<endl ; 
    cin>> n ; 

    int m ; // number of edges .. 
    cout<<"enter the number of edges"<<endl ; 
    cin>> m ; 

    // if using template there is some changes .. 
    // Graph<int> g ; 

    Graph g ; // creating ... 

    for(int i=0 ; i<m ; i++){
        int u , v ; 
        cin>> u >> v ; 


        // creating undirected graph .. 
        g.addEdge(u , v , 0 ) ; 
    }

    //printing graph .... 
    g.printAdjacencyList() ; 


return 0 ;
}
