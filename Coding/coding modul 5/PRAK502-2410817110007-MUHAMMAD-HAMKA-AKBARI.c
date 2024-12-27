#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function to calculate differences
void hitung(int a, int b, int c, int d, int *hasil1, int *hasil2) {
    *hasil1 = a - c; // Calculate the difference between a and c
    *hasil2 = b - d; // Calculate the difference between b and d
}

// Function to calculate the absolute sum
int mutlak(int hasil1, int hasil2) {
    return abs(hasil1) + abs(hasil2); // Return the sum of absolute values
}

int main() {
    int a, b, c, d;
    int hasil1, hasil2;

    // Input values for a, b, c, d
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    // Calculate differences
    hitung(a, b, c, d, &hasil1, &hasil2);

    // Print the absolute sum
    printf("Nilai mutlak adalah: %d\n", mutlak(hasil1, hasil2));

    return 0;
}
