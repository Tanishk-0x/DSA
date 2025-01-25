

#include <bits/stdc++.h>
using namespace std;


// minimum find krne ke liye function .. 
int min(int a , int b ){
    if (a < b ){
        return a ; 
    }
    return b ; 
}



// dfs function //
void dfs(int node, int parent, vector<int> &disc, vector<int> &low,
 unordered_map<int,bool>& visited, unordered_map<int, list<int> >& adj,
  vector<int>& ap , int &timer) {

    visited[node] = true ; 
    disc[node] = low[node] = timer++ ; 
    int child = 0 ; 

    for(auto neighbour: adj[node]) {
        if( neighbour == parent ){
            continue; // ignore .. 
        }
        if (!visited[neighbour]){
            dfs(neighbour , node , disc , low , visited , adj, ap , timer) ; // calling
            // low ko update krdenge .. 
            low[node] = min(low[node] , low[neighbour]) ; 

            // check krenge articulation point he ya nhi .. 
            if ( low[neighbour] >= disc[node] && parent != -1 ){
                // matlab articulation point he .. 
                ap[node] = 1 ; 
            }
            child++ ; 
        }
        else {
            // back edge ke liye .. 
            low[node] = min(low[node] , disc[neighbour]) ; 
        }
    }

    if ( parent == -1 && child > 1 ) {
        ap[node] = 1 ; 
    }

  }

    int main(){

    int n = 5; // n = number of nodes ..
    int e = 5; // e = number of edges ..

    vector<pair<int, int>> edges;

    // inserting ...
    edges.push_back(make_pair(0, 3));
    edges.push_back(make_pair(3, 4));
    edges.push_back(make_pair(0, 4));
    edges.push_back(make_pair(0, 1));
    edges.push_back(make_pair(1, 2));

    // adj list ..
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0 ; 
    vector<int> disc(n);
    vector<int> low(n);

    unordered_map<int, bool> visited;
    vector<int> ap(n, 0);

    // initiialising ..
    for (int i = 0; i < n; i++)
    {
        disc[i] = -1;
        low[i] = -1;
    }

    // dfs ..
    for (int i = 0; i < n; i++)
    {
        // agar current node visisted nhi he to dfs call kr do ..
        if (!visited[i])
        {
            dfs(i, -1, disc, low, visited, adj , ap, timer);
        }
    }

    // print articulation points ..
    cout << "Articulation Points Are : " << " ";
    for (int i = 0; i < n; i++)
    {
        if (ap[i] != 0)
        {
            cout << i << "  ";
        }
    }
    cout<<endl ; 

    return 0;
}