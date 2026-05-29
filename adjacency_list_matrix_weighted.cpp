#include <iostream>
#include <vector>
#include <iomanip> // Untuk merapikan tampilan output tabel

using namespace std;

int main() {
    int jumlah_node = 6;

    // Membuat matriks 2D berukuran 7x7 (indeks 0-6) dan diisi dengan angka 0 terlebih dahulu
    // Kita gunakan ukuran jumlah_node + 1 agar indeksnya pas dengan nomor node (1 sampai 6)
    vector<vector<int>> adj_matrix(jumlah_node + 1, vector<int>(jumlah_node + 1, 0));

    // Mengisi matriks sesuai koordinat (Dari_Node, Ke_Node) = Bobot
    // Berdasarkan gambar kamu:
    
    // Hubungan dari Node 1
    adj_matrix[1][2] = 5;
    adj_matrix[1][4] = 3;
    adj_matrix[1][5] = 7;

    // Hubungan dari Node 2
    adj_matrix[2][3] = 2;
    adj_matrix[2][4] = 4;

    // Hubungan dari Node 3
    adj_matrix[3][6] = 1;

    // Hubungan dari Node 4
    adj_matrix[4][5] = 2;
    adj_matrix[4][6] = 3;

    // Hubungan dari Node 5
    adj_matrix[5][4] = 6;
    adj_matrix[5][6] = 8;

    // Node 6 tidak menunjuk ke mana pun, jadi baris 6 tetap berisi 0 semua

    cout << "--- ADJACENCY MATRIX (GRAPH BERARAH BERBOBOT) ---" << endl << endl;
    
    // Cetak header kolom (Ke- )
    cout << "Dari\\Ke ";
    for (int j = 1; j <= jumlah_node; j++) {
        cout << setw(4) << j;
    }
    cout << "\n-----------------------------------\n";

    // Cetak isi matriks per baris
    for (int i = 1; i <= jumlah_node; i++) {
        cout << "Node " << i << " |"; // Header baris
        for (int j = 1; j <= jumlah_node; j++) {
            cout << setw(4) << adj_matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}