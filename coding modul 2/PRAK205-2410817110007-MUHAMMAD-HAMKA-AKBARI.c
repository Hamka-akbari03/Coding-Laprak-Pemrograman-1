#include <stdio.h>
#include <math.h>

int main()
{
    int tinggi, miring, alas, keliling, luas;

    scanf("%d %d", &tinggi, &miring);

    alas = sqrt(pow(miring,2) - pow(tinggi,2));
    keliling = tinggi + miring + alas;
    luas = 0.5 * alas * tinggi;

    printf("\nAlas : %d cm", alas);
    printf("\nTinggi : %d cm", tinggi);
    printf("\nKeliling : %d cm", keliling);
    printf("\nLuas : %d cm^2", luas);

    return 0;
}