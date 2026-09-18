#include <iostream>
using namespace std;

int main () {
    int N;
    printf ("Masukkan jumlah astronot: ");
    cin >> N;
    printf ("Jumlah astronot yang kamu masukkan adalah: %d\n", N);

    int K;
    printf ("Masukkan nilai K awal: ");
    cin >> K;
    printf("Nilai K yang kamu masukkan adalah: %d\n", K);


    int astronot[50];
    for (int i = 0; i < N; i++) {
        astronot[i] = i + 1;
    }

    int posisi = 0;
    int sisa = N;
    
    while (sisa > 1) {
        int langkah = 0;

        while (langkah < K) {
            if (astronot[posisi] != 0) {
                langkah++;
            }
            if (langkah < K) {
                posisi = (posisi + 1) % N;
            }
        } 
    

    int dieliminasi = astronot[posisi];
    printf("Astronot %d dieliminasi\n", dieliminasi);
    astronot[posisi] = 0;
    sisa--;

    if (dieliminasi % 2 == 0) {
        K += 2;
    } else {
        K -= 1;
    }

    if (K < 2) {
        K = 2;
    }

    for (int i = 0; i < N; i++) {
        if (astronot[i] != 0){
            printf("Astronot terakhir yang bertahan: %d\n", astronot[i]);
            break;
        }
    }
        
}

    return 0;

}