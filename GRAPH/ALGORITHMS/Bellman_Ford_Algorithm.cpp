

#include<bits/stdc++.h>
using namespace std ; 

int bellmonFord(int n , int m , int src , int dest , vector<vector<int>> &edges ) {

    vector<int> dist(n+1 , 1e9) ; // 1e9 is the maximum number consider as infinty

    dist[src] = 0 ; 

    // n - 1 times 
    for(int i=1 ; i<=n ; i++) {
        // traverse all edges list .. 
        for(int j=0 ; j<m ; j++) {
            int u = edges[j][0] ; 
            int v = edges[j][1] ; 
            int wt = edges[j][2] ; 

            if (dist[u] != 1e9 && ((dist[u] + wt) < dist[v])) {
                dist[v] = dist[u] + wt ; // updating .. 
            }
        }
    } 

    // check krenge ki negative cycle present he ya nhi .. 
    // ek aur baar formula apply krenge .. (condition)

    bool flag = 0 ; // agar negative cycle hogi to flag ko 1 kr denge .. 

            for(int j=0 ; j<m ; j++) {
            int u = edges[j][0] ; 
            int v = edges[j][1] ; 
            int wt = edges[j][2] ; 

            if (dist[u] != 1e9 && ((dist[u] + wt) < dist[v])) {
                flag = 1 ; // checking for negative cycle ..  
            }
        }

        // flag ko check krenge .. 
        if ( flag == 0 ) {
            return dist[dest] ;
        }


        return -1 ; 

}