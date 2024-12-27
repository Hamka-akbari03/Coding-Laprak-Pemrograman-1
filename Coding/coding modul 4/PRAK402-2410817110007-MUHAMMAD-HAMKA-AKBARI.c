#include <stdio.h>

void printOddNumbers(int max) {
    for (int i = 1; i <= max; i++) {
        if (i % 2 != 0) {  // Check if the number is odd
            printf("%d ", i);
        }
    }
    printf("\n");
}

void printEvenNumbersReversed(int max) {
    for (int i = max; i >= 2; i--) {
        if (i % 2 == 0) {  // Check if the number is even
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int max;
    
    // Input the maximum number
    printf("Enter the maximum number: ");
    scanf("%d", &max);

    // Print odd numbers from 1 to max
    printOddNumbers(max);

    // Print even numbers from max to 2 in reverse order
    printEvenNumbersReversed(max);

    return 0;
}
