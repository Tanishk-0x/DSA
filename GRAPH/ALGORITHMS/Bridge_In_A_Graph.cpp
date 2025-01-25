

#include<bits/stdc++.h>
using namespace std ; 



// dfs wala function ..
void dfs(int node , int parent , int &timer ,  vector<int>& disc , vector<int>& low ,
 vector<vector<int>>& result , unordered_map<int,list<int>>& adj ,unordered_map<int,bool>& visited ) {

    visited[node] = true ; 
    disc[node] = low[node] = timer++ ; 

    for(auto neighbour: adj[node]) {

        if( neighbour == parent ){
            continue;
        }

        if( !visited[neighbour]) {

            // dfs ke liye call maar denge .. 
            dfs(neighbour , node , timer , disc , low , result , adj , visited) ;
            // updating low .. 
            low[node] = min(low[node] , low[neighbour]) ; 

            // checking bridge he ya nhi .. 
            if ( low[neighbour] > disc[node] ){
                vector<int> ans ; 
                ans.push_back(node) ; 
                ans.push_back(neighbour) ; 
                result.push_back(ans) ; 
            }

        }
        // node already visited he aur parent bhi nhi he .. 
        else {
            // back edge he .. 
            low[node] = min(low[node] , disc[neighbour]) ; 
        }
    }
}




vector<vector<int>> findBridges(vector<vector<int>>& edges , int v , int e ) {
    // adj list .. 
    unordered_map<int,list<int>> adj ; 

        for(int i = 0  ; i < edges.size() ; i++){
            int u = edges[i][0] ; 
    i       nt v = edges[i][1] ; 

            adj[u].push_back(v) ; 
            adj[v].push_back(u) ; 
        }

    int timer = 0 ; 
    vector<int> disc(n) ; 
    vector<int> low(n) ; 

    int parent = -1 ; 
    // visited .. 
    unordered_map<int,bool> visited ; 

    for (int i = 0 ; i < v ; i++){
        disc[i] = -1 ; 
        low[i] = -1 ; 
    }

    // DFS 
    vector<vector<int>> result ; 

    for(int i = 0 ; i < v ; i++){
        // agar visited nhi he to DFS call kr do .. 
        if(!visited[i]) {
            dfs(i , parent , timer , disc , low , result , adj  ) ;
        }
    }
    return result ; 

}