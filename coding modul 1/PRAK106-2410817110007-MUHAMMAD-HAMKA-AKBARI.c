#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 4;
    int b = 8;
    int c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    bool a_sama_dengan_b = (a == b);
    bool b_lebih_besar_dari_c = (b > c);
    bool a_tidak_sama_dengan_c = (a != c);

    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", a_sama_dengan_b);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", b_lebih_besar_dari_c);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d", a_tidak_sama_dengan_c);

    return 0;
}