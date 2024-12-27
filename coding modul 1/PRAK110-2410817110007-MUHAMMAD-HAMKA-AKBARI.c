#include <stdio.h>
#include <math.h>

int main()
{
    printf("Diketahui :\n");
    double alas = 5;
    double tinggi = 12;

    printf("Alas = %.0lf cm\n", alas);
    printf("Tinggi = %.0lf cm\n", tinggi);

    printf("\njawab :\n");
    printf("Sisi A = %.0lf cm\n", tinggi);

    double sisi_miring = sqrt(pow(alas, 2) + pow(tinggi, 2));

    printf("Sisi B = %.0lf cm\n", sisi_miring);
    printf("Sisi c = %.0lf cm\n", alas);

    double keliling = alas + tinggi + sisi_miring;

    printf("Keliling = %.0lf cm\n", keliling);

    double luas = 1/2 * alas * tinggi;

    printf("Luas = %.0lf cm");

    return 0;
}