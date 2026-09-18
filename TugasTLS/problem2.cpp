#include <iostream>

using namespace std;

// Fungsi manual hitung panjang string (karena dilarang pakai library tambahan)
int hitungPanjang(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char pesan[500];
    cout << "Masukkan pesan rahasia (HURUF KAPITAL): ";
    cin >> pesan;

    int panjang = hitungPanjang(pesan);
    char hasil[500];

    // Huruf pertama tidak berubah
    hasil[0] = pesan[0];

    // Proses enkripsi huruf selanjutnya
    for (int i = 1; i < panjang; i++) {
        // Nilai alfabet huruf sebelumnya (A=1, B=2, ..., Z=26)
        int geser = pesan[i - 1] - 'A' + 1;

        // Posisi huruf saat ini (0 sampai 25)
        int posAwal = pesan[i] - 'A';

        // Hitung pergeseran melingkar pakai modulo 26
        int posBaru = (posAwal + geser) % 26;

        // Kembalikan ke karakter ASCII
        hasil[i] = 'A' + posBaru;
    }

    // Beri penanda akhir string
    hasil[panjang] = '\0';

    cout << "Hasil Sandi: " << hasil << endl;

    return 0;
}