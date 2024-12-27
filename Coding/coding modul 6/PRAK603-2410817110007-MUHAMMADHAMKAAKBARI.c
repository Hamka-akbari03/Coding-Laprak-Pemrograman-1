#include <stdio.h>

int main() {
    int n1, n2;

    // Input bilangan n1 dan n2
    scanf("%d %d", &n1, &n2);

    // Jika n1 tidak sama dengan n2, tampilkan pesan
    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;
    }

    int baris1[n1], baris2[n2];

    // Input angka untuk baris pertama
    for (int i = 0; i < n1; i++) {
        scanf("%d", &baris1[i]);
    }

    // Input angka untuk baris kedua
    for (int i = 0; i < n2; i++) {
        scanf("%d", &baris2[i]);
    }

    printf("\n");

    // Perkalian bilangan antara baris 1 dan baris 2
    for (int i = 0; i < n1; i++) {
        printf("%d ", baris1[i] * baris2[i]);
    }
    printf("\n");

    return 0;
}
