#include <iostream>

using namespace std; // Menggunakan namespace std

// Deklarasi/Prototipe Fungsi - FUNCTION SIGNATURE
int hitungLuasPersegiPanjang(int panjang, int lebar);

int main() {
    // Actual parameter
    int p = 10;
    int l = 5;
    int luas;

    // Pemanggilan fungsi dengan ACTUAL PARAMETER (p dan l)
    luas = hitungLuasPersegiPanjang(p, l);

    cout << "Panjang: " << p << endl;
    cout << "Lebar: " << l << endl;
    cout << "Luas Persegi Panjang: " << luas << endl;

    return 0;
}

// Implementasi Fungsi
// FORMAL PARAMETER adalah panjang dan lebar
int hitungLuasPersegiPanjang(int panjang, int lebar) {
    int hasil = panjang * lebar;
    return hasil;
}