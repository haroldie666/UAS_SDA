#include <iostream>
#include <vector>

using namespace std;

int main() {
    int jumlah_node = 6;
    
    // Cukup vector int biasa karena hanya menyimpan node tujuan
    vector<int> graph_tanpa_bobot[jumlah_node + 1];

    // Mengisi data berdasarkan gambar (mengabaikan angka bobotnya)
    // Node 1
    graph_tanpa_bobot[1].push_back(2);
    graph_tanpa_bobot[1].push_back(4);
    graph_tanpa_bobot[1].push_back(5);

    // Node 2
    graph_tanpa_bobot[2].push_back(3);
    graph_tanpa_bobot[2].push_back(4);

    // Node 3
    graph_tanpa_bobot[3].push_back(6);

    // Node 4
    graph_tanpa_bobot[4].push_back(5);
    graph_tanpa_bobot[4].push_back(6);

    // Node 5
    graph_tanpa_bobot[5].push_back(4);
    graph_tanpa_bobot[5].push_back(6);

    // Node 6 tidak memiliki tetangga keluar (NULL)

    // Menampilkan Adjacency List Tanpa Bobot
    cout << "--- ADJACENCY LIST (GRAPH TANPA BOBOT) ---" << endl;
    for (int i = 1; i <= jumlah_node; i++) {
        cout << "Node " << i << " -> ";
        if (graph_tanpa_bobot[i].empty()) {
            cout << "NULL";
        } else {
            for (int tetangga : graph_tanpa_bobot[i]) {
                cout << tetangga << " ";
            }
        }
        cout << endl;
    }

    return 0;
}