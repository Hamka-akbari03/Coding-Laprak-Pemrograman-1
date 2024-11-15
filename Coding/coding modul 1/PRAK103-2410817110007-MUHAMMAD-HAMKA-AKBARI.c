#include <stdio.h>

int main()
{
    double a = 9;
    double b = 6;
    double x = 10;
    double y = 7;
    double z;

    printf("Variabel a bernilai %.0lf\n\n", a);
    printf("Variabel b bernilai %.0lf\n\n", b);
    printf("Variabel x bernilai %.0lf\n\n", x);
    printf("Variabel y bernilai %.0lf\n\n", y);

    z = (a + b) * x / y;

    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2lf", z);

    return 0;
}