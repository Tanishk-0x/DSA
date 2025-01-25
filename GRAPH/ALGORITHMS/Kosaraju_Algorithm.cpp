

#include<bits/stdc++.h>
using namespace std ; 


// DFs function .. 
void dfs(int node , unordered_map<int,bool>& visited , stack<int>& st , unordered_map<int,list<int> >& adj) {

    visited[node] = true ; 
    for(auto neighbour: adj[node]){
        if(!visited[neighbour]) {
            dfs(neighbour , visited , st , adj ) ; 
        }
    }
    st.push(node) ;   
}


// reverse DFS function ... 
void reverseDFS (int node , unordered_map<int,bool>& visited , unordered_map<int, list<int> >& adj) {

    visited[node] = true ; 

    for(auto neighbour: adj[node]) {
        if(!visited[neighbour]) {
            reverseDFS(neighbour , visited , adj ) ; 
        }
    }
}




int stronglyConnectedComponents( int v , vector<vector<int>>& edges ){

    // adjacency list .. 
    unordered_map<int,list<int> > adj ; 

    for(int i = 0 ; i < edges.size() ; i++){
        int u = edges[i][0] ; 
        int v = edges[i][1] ; 

        adj[u].push_back(v) ; // directed graph he 
    }


    //first step =  Topological sort krenge 
    stack<int> st ; 
    unordered_map<int,bool> visited ; 
    for(int i = 0 ; i < v ; i++) {
        if (!visited[i]) {
            // dfs calling .. 
            dfs(i , visited , st , adj ) ; 
        }
    }

    
    // second step = graph ko Transpose krenge 
    unordered_map<int, list<int> > transpose ; 

    for(int i=0 ; i<v ; i++){
        visited[i] = 0 ; 
        for(auto neighbour: adj[i]){
            transpose[neighbour].push_back(i) ; // transpose created .. 
        }
    }


    // step third = ordering ke hisab se DFS call krna he 
    int count = 0 ; 
    while (!st.empty()){ 

        int top = st.top() ; 
        st.pop() ; 

        if ( !visited[top] ) {
            count++ ; 
            reverseDFS( top , visited , transpose ) ; 
        }
    }
    return count ; 
    
}