#include <stdio.h>

int main() {
    int n, i, j, k;

    // Input ukuran matriks
    printf("");
    scanf("%d", &n);

    int A[n][n], B[n][n], C[n][n];

    // Input elemen matriks A
    printf("Matriks A\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elemen matriks B
    printf("Matriks B\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Inisialisasi matriks C (hasil perkalian) dengan 0
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = 0;
        }
    }

    // Perkalian matriks A x B
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output hasil perkalian matriks
    printf("\nMatriks AXB\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}