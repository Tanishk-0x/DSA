#include<bits/stdc++.h>
using namespace std ; 



bool checkCycleDFS( int node , unordered_map<int,bool>& visited , unordered_map<int,bool>& dfsVisited , unordered_map<int,list<int>>& adj ){

    visited[node] = true ; 
    dfsVisited[node] = true ; 

    for(auto neighbour: adj[node]){
        if(!visited[node]){
            bool cycleDetected = checkCycleDFS(neighbour , visited , dfsVisited , adj ) ; 
            if(cycleDetected){
                return true ; 
            }
        }
        else if(dfsVisited[neighbour]){
            return true ; 
        }
    }

    dfsVisited[node] = false ; 

    return false ; 
}



int detectCycleInDirectedGraph( int n , vector<pair<int,int>>& edges){

    //create krenge adjList ko .. 
    unordered_map<int,list<int>> adj ; 
    for(int i = 0 ; i<edges.size() ; i++){
        int u = edges[i].first ; 
        int v = edges[i].second ; 

        // directed graph he to sirf u se v hi hoga .. 
        adj[u].push_back(v) ; 
    }

    // call krenge dfs sare components ke lliye .. 

    unordered_map<int,bool> visited ; 

    // extra data structure .. 
    unordered_map<int,bool> dfsVisited ; 

    for(int i=1 ; i<=n ; i++){
        if(!visited[i]){
            bool cycleFound = checkCycleDFS(i , visited , dfsVisited, adj ) ; 
            if(cycleFound){
                return true ; 
            }
        }
    }
    return false ; 
}