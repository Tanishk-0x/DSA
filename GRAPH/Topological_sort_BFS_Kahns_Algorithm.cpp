

// -------------------------- KAHNS ALGORITHMS ------------------------- 


#include<bits/stdc++.h>
using namespace std;


class Graph {
public:


	vector<int> topologicalSortBFS(int N, vector<int> adj[]) {
        queue<int> q; 

        // find all indegrees .. 
	    vector<int> indegree(N, 0); 

	    for(int i = 0;i<N;i++) {
	        for(auto j: adj[i]) {
	            indegree[j]++; 
	        }
	    }
	    

        // 0 indegree walo ko queue me push krdo .. 
	    for(int i = 0;i<N;i++) {
	        if(indegree[i] == 0) {
	            q.push(i); 
	        }
	    }


    // BFS CODE ---------------

	    vector<int> ans;
	    while(!q.empty()) {

	        int front = q.front(); 
	        q.pop(); 
            
            // ans me store kra lenge .. 
	        ans.push_back(front);

            //indegree updation ... 
	        for(auto i : adj[front]) {

	            indegree[i]--;
	            if(indegree[i] == 0) {
	                q.push(i); 
	            }
	        }
	    }
	    return ans;
	}


};

//--------------------------------------------------------------------------------------------------------


int main()
{

    	vector<int> adj[6];

    	adj[5].push_back(2);
    	adj[5].push_back(0);
    	adj[4].push_back(0);
    	adj[4].push_back(1);
    	adj[3].push_back(1);
    	adj[2].push_back(3);

    	Graph g ; // object created .. 

    	vector<int> v = g.topologicalSortBFS(6, adj);

        cout << "the topological sort is : " << "  " ; 

    	for(auto it: v)
    	cout << it << "  ";
    

    return 0;
}