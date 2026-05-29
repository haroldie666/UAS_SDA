#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>> &mat,
             int i, 
             int j,  
             int bobot) {

    mat[i][j] = bobot;
    mat[j][i] = bobot; 
}

void displayMatriks(vector<vector<int>> &mat) {
    int V = mat.size();

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int V = 6;
    vector<vector<int>> mat(V, vector<int>(V, 0));

    addEdge(mat, 0, 1, 2);
    addEdge(mat, 0, 3, 4);
    addEdge(mat, 0, 4, 4);
    addEdge(mat, 1, 2, 5);
    addEdge(mat, 1, 3, 4);
    addEdge(mat, 2, 5, 8);
    addEdge(mat, 3, 4, 6);
    addEdge(mat, 3, 5, 6);
    addEdge(mat, 4, 5, 7);

    cout << "Adjacency Matriks Graph Berbobot Tak Berarah:\n" << endl; 
    displayMatriks(mat);

    return 0;
}