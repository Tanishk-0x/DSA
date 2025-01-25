
// BFS (gfg) .. 
// ALGO :-
// 1 : srcnode ko queue me daal do 
// # : frontnode = q.front() ; 
// 2 : frontnode me queue ka front store kara lo 
// 3 : queue ko pop krdo aur kyu ki queue ke front me frontnode he to wo hat jayega 
// 4 : jo nikala usko True mark kr do 
// 5 : store kra lo frontnode ko ans me 
// 6 : uske jitne bhi neighbours he unko queue me daal do 



#include <iostream>
#include <queue>
#include <vector>

using namespace std;

//---------------------------------------- BFS CODE ---------------------------------------------------------------------------

// Function to perform Breadth First Search on a graph
// represented using adjacency list
void bfs(vector<vector<int> >& adjList, int node,
         vector<bool>& isvisited)
{
    // Create a queue for BFS
    queue<int> q;

    // Mark the current node as visited and enqueue it
    isvisited[node] = true;
    q.push(node);

    // Iterate over the queue
    while (!q.empty()) {
        // Dequeue a vertex from queue and print it
        int frontnode = q.front();

        q.pop(); // pop kr denge fir .. 

        cout << frontnode << " ";

        // Get all adjacent vertices of the dequeued vertex
        // frontnode If an adjacent has not been visited,
        // then mark it visited and enqueue it
        for (auto i:adjList[frontnode]) {
            if (!isvisited[i]) {
                isvisited[i] = true;
                q.push(i);
            }
        }
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------
// function edge ko add krne kke liye .. 


// Function to add an edge to the graph
void addEdge(vector<vector<int> >& adjList, int u, int v)
{
    adjList[u].push_back(v);
}

//------------------------------------------------------------------------------------------------------------------------------------

int main()
{
    // Number of vertices in the graph
    int vertices = 5;

    // Adjacency list representation of the graph
    vector<vector<int> > adjList(vertices);

    // Sample Inputs .. 
    // Add edges to the graph
    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 2, 4);

    // ek visited data structure jo track rakhega ki koi bhi node visited he ya nhi .. 
    // Mark all the vertices as not visited .. 
    vector<bool> isvisited(vertices, false);

    // Perform BFS traversal starting from vertex 0
    cout<<"The BFS traversel result is : " << "  " ; 

    // calling bfs function .. 
    bfs(adjList, 0, isvisited);

    return 0;
}