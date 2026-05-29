#include <iostream>
#include <vector>
#include <utility> // Untuk std::pair

using namespace std;

int main() {
    // Jumlah simpul pada graph (1 sampai 6)
    const int JUM_SIMPUL = 6;
    
    // Inisialisasi daftar ketetanggaan: vector dari vector pair (tetangga, bobot)
    vector<vector<pair<int, int>>> adjListWeighted(JUM_SIMPUL);

    // Menambahkan sisi beserta bobotnya (0-based index)
    
    // Hubungan Simpul 1
    adjListWeighted[0].push_back({2, 3});  // Simpul 1 ke 2 (bobot 3)
    adjListWeighted[0].push_back({6, 4});  // Simpul 1 ke 6 (bobot 4)

    // Hubungan Simpul 2
    adjListWeighted[1].push_back({1, 3});  // Simpul 2 ke 1 (bobot 3)
    adjListWeighted[1].push_back({3, 9});  // Simpul 2 ke 3 (bobot 9)
    adjListWeighted[1].push_back({5, 12}); // Simpul 2 ke 5 (bobot 12)

    // Hubungan Simpul 3
    adjListWeighted[2].push_back({2, 9});  // Simpul 3 ke 2 (bobot 9)
    adjListWeighted[2].push_back({4, 5});  // Simpul 3 ke 4 (bobot 5)

    // Hubungan Simpul 4
    adjListWeighted[3].push_back({3, 5});  // Simpul 4 ke 3 (bobot 5)
    adjListWeighted[3].push_back({5, 6});  // Simpul 4 ke 5 (bobot 6)
    adjListWeighted[3].push_back({6, 8});  // Simpul 4 ke 6 (bobot 8)

    // Hubungan Simpul 5
    adjListWeighted[4].push_back({2, 12}); // Simpul 5 ke 2 (bobot 12)
    adjListWeighted[4].push_back({4, 6});  // Simpul 5 ke 4 (bobot 6)
    adjListWeighted[4].push_back({6, 3});  // Simpul 5 ke 6 (bobot 3)

    // Hubungan Simpul 6
    adjListWeighted[5].push_back({1, 4});  // Simpul 6 ke 1 (bobot 4)
    adjListWeighted[5].push_back({4, 8});  // Simpul 6 ke 4 (bobot 8)
    adjListWeighted[5].push_back({5, 3});  // Simpul 6 ke 5 (bobot 3)

    // Menampilkan Daftar Ketetanggaan Berbobot
    cout << "===============================================" << endl;
    cout << "    DAFTAR KETETANGGAAN (WEIGHTED LIST)        " << endl;
    cout << "===============================================" << endl;
    
    for (int i = 0; i < JUM_SIMPUL; i++) {
        cout << "Simpul " << i + 1 << " terhubung ke -> \n";
        for (size_t j = 0; j < adjListWeighted[i].size(); j++) {
            int tetangga = adjListWeighted[i][j].first;
            int bobot = adjListWeighted[i][j].second;
            cout << "   - Simpul " << tetangga << " (Bobot: " << bobot << ")\n";
        }
        cout << endl;
    }
    return 0;
}