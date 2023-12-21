#include <iostream>
#define MAX 5
using namespace std;

struct TumpukanBuku {
    int top;
    int antrian[MAX];
} perpus;

void inisialisasi() {
    perpus.top = -1;
}

bool kondisikosong() {
    return perpus.top == -1;
}

bool kondisiPenuh() {
    return perpus.top == MAX - 1;
}

void inputData() {
    if (kondisiPenuh()) {
        cout << "\nAntrian penuh" << endl;
    } else {
        perpus.top++;
        cout << "\nMasukan Antrian =";
        cin >> perpus.antrian[perpus.top];
        cout << "Antrian " << perpus.antrian[perpus.top] << " Telah Masuk Ke Tumpukan Buku" << endl;
    }
}

void hapusData() {
    if (kondisikosong()) {
        cout << "\nAntrian kosong \n" << endl;
    } else {
        cout << "\nAntrian " << perpus.antrian[perpus.top] << " Telah Di Hapus" << endl;
        perpus.top--;
    }
}

void tampilData() {
    if (kondisikosong()) {
        cout << "Antrian kosong";
    } else {
        cout << "\nAntrian : ";
        for (int i = perpus.top; i >= 0; i--)
            cout << perpus.antrian[i] << ((i == 0) ? "" : ",");
    }
}

int main() {
    int pilihan;
    inisialisasi();
    do {
        tampilData();
        cout << "\n1. Masukan Data\n"
             << "2. Hapus Data\n"
             << "3. Keluar\n"
             << "Masukan Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                inputData();
                break;
            case 2:
                hapusData();
                break;
            case 3:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
        }
    } while (pilihan != 3);

    return 0;
}
