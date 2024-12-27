#include <stdio.h>

// Function to find the maximum of two numbers
int maksimal(int a, int b) {
    return (a > b) ? a : b;  // If a is greater than b, return a; otherwise, return b
}

// Function to find the minimum of two numbers
int minimal(int a, int b) {
    return (a < b) ? a : b;  // If a is smaller than b, return a; otherwise, return b
}

int main() {
    int batas = 0;
    int maks = -100000;  // Initialize with a very small value (assuming numbers are not smaller than this)
    int minim = 100000;  // Initialize with a very large value (assuming numbers are not larger than this)
    int bilangan;

    // Read the number of inputs
    scanf("%d", &bilangan);

    // Loop to process the numbers
    while (batas < bilangan) {
        int nilai;
        scanf("%d", &nilai);

        // Update the maximum and minimum values
        maks = maksimal(maks, nilai);
        minim = minimal(minim, nilai);

        batas++;
    }

    // Print the maximum and minimum values
    printf("%d %d", maks, minim);

    return 0;
}

