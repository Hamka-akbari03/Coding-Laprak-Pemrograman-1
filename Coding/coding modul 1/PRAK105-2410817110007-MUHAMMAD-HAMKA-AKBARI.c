#include <stdio.h>

int main()
{
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    printf("Variabel a bernilai %d\n", a);
    printf("\nVariabel b bernilai %d\n", b);
    printf("\nVariabel x bernilai %d\n", x);
    printf("\nVariabel y bernilai %d\n", y);

    int sisa_bagi_a_b = a % b;
    int sisa_bagi_x_y = x % y;

    int total_sisa_bagi = sisa_bagi_a_b + sisa_bagi_x_y;

    printf("\nTotal sisa bagi dari a dibagi b dan x dibagi y adalah %d", total_sisa_bagi);

    return 0;
}