#include <stdio.h>

int main() {
    int n; // Jumlah ruangan
    scanf("%d", &n);

    int zetsu[n]; // Array untuk menyimpan jumlah awal Zetsu putih
    for (int i = 0; i < n; i++) {
        scanf("%d", &zetsu[i]);
    }

    // Menghitung jumlah Zetsu putih setelah membelah diri
    for (int i = 0; i < n; i++) {
        zetsu[i] *= (i + 1); // Perkalian dengan label ruangan (index + 1)
    }

    printf("\n");

    // Menampilkan output
    for (int i = 0; i < n; i++) {
        printf("%d ", zetsu[i]);
    }
    printf("\n");

    return 0;
}
