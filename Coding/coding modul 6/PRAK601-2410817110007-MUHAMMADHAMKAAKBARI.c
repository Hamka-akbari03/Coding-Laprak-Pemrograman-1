#include <stdio.h>

int main() {
    int baris, kolom;

    // Input jumlah baris dan kolom
    scanf("%d %d", &baris, &kolom);

    int matriks[baris][kolom]; // Deklarasi array 2D untuk menyimpan matriks

    // Input elemen matriks (baris * kolom angka)
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }

    printf("\n");

    // Output matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n"); // Pindah ke baris berikutnya
    }

    return 0;
}