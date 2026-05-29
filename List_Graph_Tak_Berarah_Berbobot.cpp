#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int tujuan;
    int bobot;
};

void addEdge(vector<vector<Edge>> &adj,
             int asal,
             int tujuan,
             int bobot) {

    adj[asal].push_back({tujuan, bobot});
    adj[tujuan].push_back({asal, bobot});
}

void displayGraph(vector<vector<Edge>> &adj) {

    for (int i = 1; i < adj.size(); i++) {
        cout << i << " -> ";

        for (Edge e : adj[i]) {
            cout << "(" << e.tujuan << "," << e.bobot << ") -> ";
        }
        cout << "NULL" << endl;
    }
}

int main() {
    int V = 7;
    vector<vector<Edge>> adj(V);

    addEdge(adj, 1, 2, 3);
    addEdge(adj, 1, 6, 4);
    addEdge(adj, 2, 3, 9);
    addEdge(adj, 2, 5, 12);
    addEdge(adj, 3, 4, 5);
    addEdge(adj, 4, 5, 6);
    addEdge(adj, 4, 6, 8);
    addEdge(adj, 5, 6, 3);

    cout << "Adjacency List Graph Tak Berarah dan Berbobot:\n " << endl;
    displayGraph(adj);

    return 0;
}