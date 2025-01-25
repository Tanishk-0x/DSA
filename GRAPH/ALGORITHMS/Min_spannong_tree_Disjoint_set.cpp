#include<bits/stdc++.h>
using namespace std ; 


// comparator .. 
bool cmp (vector<int?& a , vector<int>& b ) {
    return a[2] < b[2] ; 
}



void makeSet(vector<int>& parent , vector<int>& rank , int n ){
    // shuru me element ka parent khud element hii he .. 
    // har kisi ki rank starting me 0 ke equal he .. 
    for (int i=0 ; i<n ; i++){
        parent[i] = i ; 
        rank[i] = 0 ; 
    }
}

// function for find parent .. 
int findParent(vector<int>& parent , int node ){
    if( parent[node] == node ){
        return node ; 
    }
    return parent[node] = findParent( parent , parent[node] ) ; 
}


// union wali chij .. 
void unionSet(int u , int v , vector<int>& parent , vector<int>& rank ) {

    u = findParent(parent , u ) ; 
    v = findParent(parent , v ) ; 

    // ranks ko compare krenge .. 
    if( rank[u] < rank[v] ){
        parent[u] = v ; 
    }
    else if ( rank[v] < rank[u] ){
        parent[v] = u ; 
    }
    else {
        // logic .. conditions .. 
        parent[v] = u ; 
        rank[u]++ ; 
    }

}



int minimumSpanningTree(vector<vector<int>>& edges , int n ) {

    // sort ---
    sort(edges.begin() , edges.end() , cmp ) ; 

    vector<int> parent(n) ; 
    vector<int> rank(n) ;

    // calling .. 
    makeSet(parent , rank , n) ; 

    int minWeight = 0 ; 

    for(int i=0 ; i<edges.size() ; i++) {
        int u = findParent(parent , edges[i][0]) ; 
        int v = findParent(parent , edges[i][1]) ; 
        int wt = edges[i][2] ; 

        // check krenge dono same he ya nhi .. 
        // same he to ignore .. 
        // differnet he to attach .. 

        if( u != v ){
            minWeight += wt ; 
            unionSet(u , v ,parent , rank)  ; 
        }
    }
    return minWeight ; 
}




