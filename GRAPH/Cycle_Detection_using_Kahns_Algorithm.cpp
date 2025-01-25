
// agar uska Topological sort nikal paa rhe to wo ek Acyclic Graph he 
// or agar topological sort invalid aa gya to wo ek cyclic Graph he 


#include <bits/stdc++.h>
using namespace std;

class Graph {
public:


	// Function to detect cycle in a directed graph.
    
	bool isCyclic(int V, vector<int> adj[]) {
		int indegree[V] = {0};
		for (int i = 0; i < V; i++) {
			for (auto it : adj[i]) {
				indegree[it]++;
			}
		}

		queue<int> q;

		for (int i = 0; i < V; i++) {
			if (indegree[i] == 0) { // agar indegree 0 he to queue me daal do 
				q.push(i);
			}
		}



		int count = 0;
		
		while (!q.empty()) {
			int front = q.front();
			q.pop();
			count++;
			// node is in your topo sort
			// so please remove it from the indegree

			for (auto i : adj[front]) {
				indegree[i]--;
				if (indegree[i] == 0){
                     q.push(i);
                }
			}
		}

        // checking count .. 
        // agar( count != n )he to invalid topological sort he to cycle present he .. 
        

		if (count == V) {
            return false;
        }

		return true;
	}


};

//-------------------------------------------------------------------------------------------------

int main() {

	// v == 6 
	vector<int> adj[6] = {{}, {2}, {3}, {4, 5}, {2}, {}};

	int V = 6;

	Graph g; // object creation ... 

	bool ans =  g.isCyclic(V, adj);

    cout<<"The result is : "<<"  " ; 

	if (ans) cout << "True";

	else cout << "Flase";

	cout << endl;

	return 0;
}