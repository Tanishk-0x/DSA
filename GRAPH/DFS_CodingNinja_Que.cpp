
// code for DFS ( coding ninja question )

#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>

using namespace std ; 

//-------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------- DFS CODE ---------------------------------------------------------------

void dfs(int node , unordered_map<int,bool>& visited , unordered_map<int,list<int>>& adjList , vector<int>component ){
    component.push_back(node) ; 
    visited[node] = true ; 

    // har connected node ke liye recursive call ... 
    for(auto i: adjList[node]){
        if( !visited[i] ){
            dfs(i , visited , adjList , component ) ; // dfs calling .. 
        }
    }
}


//----------------------------------------------------------------------------------------------------------------------------

vector<vector<int>> depthFirstSearch(int V , int E , vector<vector<int>>& edges ){
    
    // prepare krenge adjacency list ko .. 
    unordered_map<int,list<int>> adjlist ; 

    for(int i = 0 ; i<edges.size() ; i++){
        // u and v niikalnege .. 
        int u = edges[i][0] ; 
        int v = edges[i][1] ; 

        adjlist[u].push_back(v) ; 
        adjlist[v].push_back(u) ; 
    }


    vector<vector<int>> ans ; 

    unordered_map<int,bool>> visited ; 
    // call all the nodes if not visisted .. 
    for(int i =0 ; i < V ; i++){
        if( !visited[i]){
            vector<int> component ; 
            dfs(i , visited , adjlist , component) ; 
            ans.push_back(component) ; 
        }
    }
    return ans ; 


}