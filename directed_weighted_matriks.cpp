#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>> &mat,
             int asal,
             int tujuan,
             int bobot) {

    mat[asal][tujuan] = bobot;
}

void displayMatriks(vector<vector<int>> &mat) {
    int V = mat.size();

    for (int i = 1; i < V; i++) {
        for (int j = 1; j < V; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int V = 7;
    vector<vector<int>> mat(V, vector<int>(V, 0));

    addEdge(mat, 1, 2, 2);
    addEdge(mat, 1, 4, 4);
    addEdge(mat, 1, 5, 4);
    addEdge(mat, 2, 3, 5);
    addEdge(mat, 2, 4, 4);
    addEdge(mat, 3, 6, 8);
    addEdge(mat, 4, 6, 6);
    addEdge(mat, 5, 4, 6);
    addEdge(mat, 5, 6, 7);

    cout << "Adjacency Matriks Graph Berarah dan Berbobot:\n" << endl;
    displayMatriks(mat);

    return 0;
}