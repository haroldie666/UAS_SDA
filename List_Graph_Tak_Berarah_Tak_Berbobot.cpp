#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Jumlah simpul pada graph (1 sampai 6)
    const int JUM_SIMPUL = 6;
    
    // Inisialisasi daftar ketetanggaan
    vector<vector<int>> adjList(JUM_SIMPUL);

    // Menambahkan sisi (edge) antar simpul (0-based index)
    
    // Hubungan Simpul 1
    adjList[0].push_back(2);  // 1 - 2
    adjList[0].push_back(6);  // 1 - 6

    // Hubungan Simpul 2
    adjList[1].push_back(1);  // 2 - 1
    adjList[1].push_back(3);  // 2 - 3
    adjList[1].push_back(5);  // 2 - 5

    // Hubungan Simpul 3
    adjList[2].push_back(2);  // 3 - 2
    adjList[2].push_back(4);  // 3 - 4

    // Hubungan Simpul 4
    adjList[3].push_back(3);  // 4 - 3
    adjList[3].push_back(5);  // 4 - 5
    adjList[3].push_back(6);  // 4 - 6

    // Hubungan Simpul 5
    adjList[4].push_back(2);  // 5 - 2
    adjList[4].push_back(4);  // 5 - 4
    adjList[4].push_back(6);  // 5 - 6

    // Hubungan Simpul 6
    adjList[5].push_back(1);  // 6 - 1
    adjList[5].push_back(4);  // 6 - 4
    adjList[5].push_back(5);  // 6 - 5

    // Menampilkan Daftar Ketetanggaan
    cout << "===============================================" << endl;
    cout << "   DAFTAR KETETANGGAAN (UNWEIGHTED LIST)       " << endl;
    cout << "===============================================" << endl;
    
    for (int i = 0; i < JUM_SIMPUL; i++) {
        cout << "Simpul " << i + 1 << " terhubung ke -> [ ";
        for (size_t j = 0; j < adjList[i].size(); j++) {
            cout << adjList[i][j];
            if (j < adjList[i].size() - 1) cout << ", ";
        }
        cout << " ]" << endl;
    }
    return 0;
}