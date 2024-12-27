#include <stdio.h>

// Function to reverse the digits of a number
int reverse(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10; // Extract the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        n = n / 10; // Remove the last digit from the original number
    }
    return reversed;
}

int main() {
    int A, B;
    // Read two integers A and B
    scanf("%d %d", &A, &B);
    
    // Reverse A and B
    A = reverse(A);
    B = reverse(B);
    
    // Add the reversed numbers
    int C = A + B;
    
    // Reverse the sum and print it
    printf("%d", reverse(C));
    
    return 0;
}
