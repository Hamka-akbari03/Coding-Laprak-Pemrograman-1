#include <stdio.h>
#define PI 3.141592653

int main()
{
    printf("Diketahui :\n");
    double putaran = 5;
    double jarak_tempuh = 14;

    printf("Pak Dengklek mengelilingi taman = %.0lf putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0lf kilometer\n", jarak_tempuh);

    printf("\nJawaban :\n");

    double keliling = jarak_tempuh / putaran;

    double jari_jari = keliling / (2 * PI);

    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2lf", jari_jari);
    
    return 0;
}