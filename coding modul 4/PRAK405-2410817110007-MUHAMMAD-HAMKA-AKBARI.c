#include <stdio.h>

int main() {
    int n, k, i, j, sum, total_sum;

    while (scanf("%d %d", &n, &k) != EOF) {
        total_sum = 0;

        for (i = 1; i <= n; i++) {
            sum = 0;
            for (j = i; j >= 1; j--) { // Reverse the loop order
                sum += j * k;
                printf("(%d * %d)", j, k);
                if (j != 1) {
                    printf(" + ");
                }
            }
            total_sum += sum;
            printf(" = %d\n", sum);
        }

        printf("%d\n", total_sum);
        break;
    }

    return 0;
}