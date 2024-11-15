#include <stdio.h>

int main()
{
    double sepatu_A = 400000;
    double sepatu_B = 350000;

    printf("Harga sepatu A adalah %.0lf\n", sepatu_A);
    printf("\nHarga sepatu B adalah %.0lf\n", sepatu_B);

    double diskon1 = 0.13;
    double diskon2 = 0.21;

    double harga_diskon1 = sepatu_A - (diskon1 * sepatu_A);
    double harga_diskon2 = sepatu_B - (diskon2 * sepatu_B);

    printf("\nSepatu A mendapat diskon 13%% sehingga harganya menjadi %.0lf\n", harga_diskon1);
    printf("\nSepatu A mendapat diskon 21%% sehingga harganya menjadi %.0lf", harga_diskon2);

    return 0;
}