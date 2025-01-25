
// Representation of Graph by Adjacency Matrix ..
// Sample Input
// 5 6
// 1 5
// 2 3
// 3 4
// 5 2
// 1 3
// 4 2

// output 
//   0 1 2 3 4
// 0 0 0 0 0 0 
// 1 0 0 0 1 0 
// 2 0 0 0 1 1 
// 3 0 1 1 0 1 
// 4 0 0 1 1 0 

#include <iostream>
using namespace std;

int main()
{
    // n = number of nodes
    // m = number of edges
    int m;
    int n;
    cin >> n >> m;

    // creating matrix ..
    int AdjMatrix[n + 1][n + 1];

    // Matrix ko initialise krenge ..
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            AdjMatrix[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int u;
        int v;
        cin>> u >> v ; 
        AdjMatrix[u][v] = 1;
        AdjMatrix[v][u] = 1 ; 

        // for a directed graph assign AdjMatrix[u][v] as 1 
    }

    // printing the graph .. 
    cout << " " ; 

    for(int i = 0 ; i < n ; i++){
        cout << " " << i ; 
    }
    cout<<endl ; 

    for(int i = 0 ; i< n ; i++){
        cout << i << " " ; 
        for(int j = 0 ; j< n ; j++){
        cout << AdjMatrix[i][j] << " " ; 
        }
        cout<<endl ; 
    }

    return 0;
}

