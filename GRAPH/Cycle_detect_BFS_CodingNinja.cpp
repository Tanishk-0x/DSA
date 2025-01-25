
// conditions = agar visited == true && node != parent 
// agar ye dono condition satisfy krti he to cycle present he ..



#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
#include<list>
using namespace std ; 


//-------------------------------------------------------------------------------------------------------------------
//------------------------------------------- CYCLIC DETECTION BFS --------------------------------------------------



bool isCyclicBFS( int src , unordered_map<int,bool>& visited , unordered_map<int,list<int>>& adjList){
    
    unordered_map<int,int> parent ; 

    parent[src] = -1 ; 
    visited[src] = 1 ; 
    queue<int> q ; 
    q.push(src) ; 

    while(!q.empty()){
        
        int front = q.front() ; 
        q.pop() ; 

        for(auto neighbour: adjList[front]){
            
            if(visited[neighbour] == true && neighbour != parent ){
                return true ; // checking conditions for cycle .. 
            }

            else if(!visited[neighbour]){

                q.push(neighbour) ; 
                visited[neighbour] = true ; 
                parent[neighbour] = front ; 

            }
        }
    }

    return false ; 

}

//---------------------------------------------------------------------------------------------------------------------------

string cycleDetection( vector<vector<int>>& edges , int n , int m ){

    // create krenge adjacenecy list ko .. 
    unordered_map<int,list<int>>& adjList ; 

    for(int i = 0 ; i<m ; i++){
        int u = edges[i][0] ; 
        int v = edges[i][1] ; 

        adjList[u].push_back(v) ;
        adjList[v].push_back(u) ; 

    }

    // to handle dissconnected components .. 
    unordered_map<int,bool> visited ; 
    for(int i=0 ; i<n ; i++){
        if(!visited[i]){
            
            bool ans = isCyclicBFS(i , visited , adjList) ; 
            if(ans == 1 ){
                return "Yes" ; 
            }
        }
    }
    return "No" ; 
}