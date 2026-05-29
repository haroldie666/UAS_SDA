#include <iostream>
#include <vector>

using namespace std;

int main() {
    int jumlah_node = 6;
    
    // Setiap elemen vector berisi list dari pair (node_tujuan, bobot)
    vector<pair<int, int>> graph_berbobot[jumlah_node + 1];

    // Node 1
    graph_berbobot[1].push_back({2, 5});
    graph_berbobot[1].push_back({4, 3});
    graph_berbobot[1].push_back({5, 7});

    // Node 2
    graph_berbobot[2].push_back({3, 2});
    graph_berbobot[2].push_back({4, 4});

    // Node 3
    graph_berbobot[3].push_back({6, 1});

    // Node 4
    graph_berbobot[4].push_back({5, 2});
    graph_berbobot[4].push_back({6, 3});

    // Node 5
    graph_berbobot[5].push_back({4, 6});
    graph_berbobot[5].push_back({6, 8});

    // Node 6 tidak memiliki tetangga keluar (NULL)

    // Menampilkan Adjacency List Berbobot
    cout << "--- ADJACENCY LIST (GRAPH BERBOBOT) ---" << endl;
    for (int i = 1; i <= jumlah_node; i++) {
        cout << "Node " << i << " -> ";
        if (graph_berbobot[i].empty()) {
            cout << "NULL";
        } else {
            for (auto edge : graph_berbobot[i]) {
                cout << "(" << edge.first << ", " << edge.second << ") ";
            }
        }
        cout << endl;
    }

    return 0;
}