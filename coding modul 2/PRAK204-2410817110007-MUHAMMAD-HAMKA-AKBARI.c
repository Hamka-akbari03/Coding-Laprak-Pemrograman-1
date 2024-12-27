#include <stdio.h>
#include <math.h>

int main()
{
    float PI = 22.0/7.0;
    float jari_jari, tinggi_bejana, luas, volume, keliling;

    scanf("%f %f", &jari_jari, &tinggi_bejana);

    volume = PI * (pow(jari_jari,2)) * tinggi_bejana;
    luas = 2 * PI * jari_jari * (jari_jari + tinggi_bejana);
    keliling = 2 * PI * jari_jari;

    printf("\nVolume = %.2f", volume);
    printf("\nLuas = %.2f", luas);
    printf("\nKeliling = %.2f", keliling);

    return 0;
}