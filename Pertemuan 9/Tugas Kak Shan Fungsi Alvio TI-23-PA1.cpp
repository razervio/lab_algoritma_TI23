#include <iostream>
using namespace std;
const int n = 40;

float lp(float p, float l) {
    float luasPersegi = p * l;
    
    cout << "Luas Persegi adalah : " << luasPersegi << " cm2" << endl;
}

void garis(int n) {
    for (int i = 0; i < n; i++) {
        cout << "=";
    }
    cout << endl;
}

void vt(float r, float t) {
    float phi = 3.14;
    float volumeTabung = phi * r * r * t;
    
    cout << "V = " << phi << " x " << r << " x " << r << " x " << t << endl;
    cout << "Hasil Dari Volume Tabung Pertama Adalah: " << volumeTabung << " cm3" << endl;
    garis(n);
}

int main() {
    for (int i = 0; i < 2; i++) {
        float p, l;
        cout << "\nMenghitung Luas Persegi Ke-" << i + 1 << endl;
        cout << "Masukkan Panjang Persegi: ";
        cin >> p;
        cout << "Masukkan Lebar Persegi: ";
        cin >> l;

        lp(p, l);
        garis(n);
    }

    for (int i = 0; i < 2; i++) {
        float r, phi;
        phi = 3.14;

        cout << "\nMasukkan Luas Lingkaran Ke-" << i + 1 << endl;
        cout << "Masukkan Jari-jari Lingkaran: ";
        cin >> r;

        cout << "Luas Lingkaran: phi x r x r" << endl;
        cout << "Luas Lingkaran: " << phi << " x " << r << " x " << r << endl;
        float ll = phi * r * r;
        cout << "Hasil Dari Luas Lingkaran Pertama Adalah: " << ll << " cm2" << endl;
        garis(n);
    }

    for (int i = 0; i < 2; i++) {
        float r, t;
        float phi = 3.14;

        cout << "\nMasukkan Panjang Jari-jari: ";
        cin >> r;
        cout << "Masukkan Panjang Tinggi Tabung: ";
        cin >> t;

        vt(r, t);
    }

    return 0;
}
