#include <iostream>
#include <vector>
using namespace std;

class Graph {
public:
  int V; // Number of vertices
  vector<vector<int>> adj;

  Graph(int V) {
    this->V = V;
    adj.resize(V);
  }

  void addEdge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u); // Undirected graph
  }

  void displayGraph() {
    for (int i = 0; i < V; i++) {
      cout << "Vertex " << i << ":";
      for (int v : adj[i]) {
        cout << " -> " << v;
      }
      cout << endl;
    }
  }
};

int main() {
  Graph g(5); // Creates a graph with 5 vertices

  g.addEdge(0, 1);
  g.addEdge(0, 4);
  g.addEdge(1, 2);
  g.addEdge(1, 3);
  g.addEdge(1, 4);
  g.addEdge(2, 3);
  g.addEdge(3, 4);

  g.displayGraph();

  return 0;
}
