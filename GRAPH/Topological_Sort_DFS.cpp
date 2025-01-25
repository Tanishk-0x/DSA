



#include <bits/stdc++.h>

using namespace std;

class Graph {


  void findTopoSort( int node , vector <int> & visited , stack <int> & st , vector <int> adj[] ) {

    visited[node] = 1;

    for (auto i: adj[node]) {

      if (!visited[i]) {

        findTopoSort(i, visited, st, adj); // calling ... 

      }

    }

    //logic..
    st.push(node);

  }


  public:


    vector <int> topoSort(int N, vector <int> adj[]) {

      stack <int> st;
      vector <int> visited(N, 0);

      for (int i = 0; i < N; i++) {
        if (visited[i] == 0) {
          findTopoSort(i, visited, st, adj); // calling .. 
        }
      }


      vector < int > ans;

      while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
      }
      return ans;

    }

};


//-------------------------------------------------------------------------------------------------------


int main() {

  int N = 6;

  vector < int > adj[5 + 1];

  adj[5].push_back(2);
  adj[5].push_back(0);
  adj[4].push_back(0);
  adj[4].push_back(1);
  adj[2].push_back(3);
  adj[3].push_back(1);


  Graph g ; // object creation .. 

  vector <int> result = g.topoSort(6, adj);

  cout << "Toposort for the given graph is:" << endl;

  for (int i = 0; i < result.size(); i++) {

    cout << result[i] << " ";

  }

  return 0;
} 