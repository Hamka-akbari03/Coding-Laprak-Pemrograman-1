#include <stdio.h>

int main()
{
    int pasukan = 958730;
    int pahlawan = 5;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan);
    printf("Jumlah pahlawan = %d\n", pahlawan);

    int dikalahkan = pasukan / pahlawan;

    printf("Jumlah Pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", dikalahkan);

    return 0;
}