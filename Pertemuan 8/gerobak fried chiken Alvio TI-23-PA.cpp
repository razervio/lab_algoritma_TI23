#include <iostream>
#include <string>
using namespace std;

struct Jenis {
    int banyak;
};

int main() {
    cout << endl << endl << "==========================================================================================" << endl;
    const string cek[3][3] = {{"D", "Dada", "Rp2.500"}, {"P", "Paha", "Rp2.000"}, {"S", "Sayap", "Rp1.500"}};
    int o1, a2, d1[20], d2 = 0, d3;
    char h[20];

    cout << "\t\tGEROBAK FRIED CHICHEN" << endl;
    cout << "=====================================================" << endl;
    cout << "\tKode\t\tJenis\t\t Harga" << endl;
    cout << "=====================================================" << endl;

    for (int a1 = 0; a1 < 3; a1++) {
        for (int c1 = 0; c1 < 3; c1++) {
            cout << "\t" << cek[a1][c1] << "\t";
        }
        cout << endl;
    }

    cout << "=====================================================" << endl;

    cout << endl << "Banyak jenis : ... ";
    cin >> o1;

    Jenis jns[20]; // Deklarasi variabel jns

    for (int a1 = 0; a1 < o1; a1++) {
        cout << "Jenis Potong [D/P/S] : ... ";
        cin >> h[a1];
        cout << "Banyak Potong : ... ";
        cin >> jns[a1].banyak;
    }

    string j[5] = {"No.", "Jenis Potong", " Harga Satuan", "  Banyak Potong", "     Jumlah Harga"};

    cout << "\t\tGerobak Fired Chichen" << "\n--------------------------------------------------------------------------------\n";
    for (int q = 0; q < 5; q++) {
        cout << j[q] << "\t";
    }
    cout << endl << "--------------------------------------------------------------------------------\n";

    for (int a2 = 0; a2 < o1; a2++) {
        cout << a2 + 1 << "\t\t" << h[a2] << "\t   ";

        int hargaSatuan = 0;
        if (h[a2] == 'd' || h[a2] == 'D') {
            hargaSatuan = 2500;
        } else if (h[a2] == 'p' || h[a2] == 'P') {
            hargaSatuan = 2000;
        } else if (h[a2] == 's' || h[a2] == 'S') {
            hargaSatuan = 1500;
        }

        cout << "Rp " << hargaSatuan << "\t\t" << jns[a2].banyak << "   \t        ";

        d1[a2] = hargaSatuan * jns[a2].banyak;
        cout << "Rp " << d1[a2] << endl;

        d2 += d1[a2];
    }

    d3 = d2 * 10 / 100;

    cout << "--------------------------------------------------------------------------------\n";

    cout << "\t\t\t\t\t  Jumlah Bayar :\tRp " << d2 << endl;
    cout << "\t\t\t\t\t     Pajak 10% :\tRp " << d3 << endl;
    cout << "\t\t\t\t\t   Total Bayar :\tRp " << d3 + d2 << endl;

    cout << "--------------------------------------------------------------------------------\n";

    return 0;
}
