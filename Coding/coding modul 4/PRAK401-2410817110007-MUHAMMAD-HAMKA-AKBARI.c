#include <stdio.h>
#include <stdlib.h>

int main() {
    int kelipatan;
    char simbol;

    // Input: Read both kelipatan and simbol from the user in the format "3 #"
    printf("Masukkan bilangan kelipatan dan simbol (misalnya 3 #): ");
    scanf("%d %c", &kelipatan, &simbol);

    // Output: Iterate from 1 to 50
    for (int i = 1; i <= 50; i++) {
        if (i % kelipatan == 0) {
            printf("%c ", simbol);  // Print the symbol instead of the number
        } else {
            printf("%d ", i);  // Print the number if it's not a multiple
        }

        // New line every 10 numbers
        if (i % 10 == 0) {
            printf("\n");  // Print a new line after every 10 numbers
        }
    }

    return 0;
}