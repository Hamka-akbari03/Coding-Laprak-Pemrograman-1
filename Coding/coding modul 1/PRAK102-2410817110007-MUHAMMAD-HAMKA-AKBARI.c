#include <stdio.h>

int main()
{
    float a = 4;
    float b = 8;
    float c = 3;
    float total;

    printf("Variabel a bernilai %.0lf\n\n", a);
    printf("Variabel b bernilai %.0lf\n\n", b);
    printf("Variabel c bernilai %.0lf\n\n", c);

    total = a * b / c;

    printf("Hasil dari a dikali b dibagi c adalah %lf", total);

    return 0;
}