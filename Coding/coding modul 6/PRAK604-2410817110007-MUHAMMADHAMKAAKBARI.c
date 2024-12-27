#include <stdio.h>
#include <string.h>

int main() {
    char kode[101], pesan[101];
    int star = 0, hash = 0;

    // Input the code and the message
    printf("");
    fgets(kode, sizeof(kode), stdin);
    printf("");
    fgets(pesan, sizeof(pesan), stdin);

    // Remove trailing newline characters if present
    kode[strcspn(kode, "\n")] = '\0';
    pesan[strcspn(pesan, "\n")] = '\0';

    // Check if lengths are different
    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    // Compare the strings and generate * or #
    for (int i = 0; i < strlen(kode); i++) {
        if (kode[i] == ' ' && pesan[i] == ' ') {
            // Matching spaces
            printf(" ");
        } else if (kode[i] == ' ' || pesan[i] == ' ') {
            // Mismatched spaces
            printf("#");
            hash++;
        } else if (kode[i] == pesan[i]) {
            // Matching characters
            printf("*");
            star++;
        } else {
            // Mismatched characters
            printf("#");
            hash++;
        }
    }
    printf("\n");

    // Output counts of stars and hashes
    printf("* = %d\n", star);
    printf("# = %d\n", hash);

    // Determine authenticity
    if (star >= hash) {
        printf("Pesan Asli\n");
    } else { 
        printf("Pesan Palsu\n");
    }

    return 0;
}