#include<bits/stdc++.h>
using namespace std ; 



vector<int> dijkshtra(vector<vector<int>>& vec , int vertices , int edges , int source ){

    // create krenge Adjacency list ko 
    unordered_map<int,list<pair<int,int>>> adj ; 

    for(int i=0 ; i<edges ; i++){
        int u = vec[i][0] ; 
        int v = vec[i][1] ; 
        // weight nikalenege .. 
        int w = vec[i][2] ; 

        adj[u].push_back(make_pair(v,w)) ; 
        adj[v].push_back(make_pair(u,w)) ; 
    }

//-------------------------------------------------------------

    // distance wala array banayenge .. 
    vector<int> dist(vertices) ; 
    for(int i=0 ; i<vertices ; i++){
        dist[i] = INT_MAX ;   // initialise it with infinte ..       
    }


    // set banayenge jo do chije carry krega 
    // 1st = distance of node  ,  2nd = node  
    set<pair<int,int> > st ; // (distance,node)

    dist[source] = 0 ; 
    st.insert(make_pair(0 , source)) ; 

    while(!st.empty()){

       // fetch krenge top ka record .. 
       auto top = *(st.begin()) ;  
       //top ke andar do chije hogi ek node ki distance aur ek topnode 

       int nodeDistance = top.first ; 
       int topNode = top.second ; 

        //remove the top record 
       st.erase(st.begin()) ; 

       // neighbours pe travel krenge ---------------------

       for(auto neighbour: adj[topNode]){
        // condition update krna he ya nhi check krenge ..
        if(nodeDistance + neighbour.second < dist[neighbour.first]){
            auto record = st.find(make_pair(dist[neighbour.first], neighbour.first)) ; 

            // if record found then erase it .. 
            if( record != st.end ){
                st.erase(record) ; 
            }

            // distance updation .. 
            dist[neighbour.first] = nodeDistance + neighbour.second ; 
            //record ko set me push kr denge pair banake .. 
            st.insert(make_pair(dist[neighbour.first], neighbour.first )) ; 
        }
       }
    }
    
    return dist ; 
}