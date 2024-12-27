#include <stdio.h>

int main()
{
    printf("Diketahui :\n");
    int sisi_tanah_1 = 4;
    int sisi_tanah_2 = 5;
    int sisi_tanah_3 = 7;
    int harga_per_meter = 85000;

    printf("Panjang sisi segitiga berturut-turut adalah %d, %d dan , %d\n", sisi_tanah_1, sisi_tanah_2, sisi_tanah_3);

    int keliling_tanah = sisi_tanah_1 + sisi_tanah_2 + sisi_tanah_3;

    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling_tanah);
    printf("Harga tanah Per Meter adalah %d\n", harga_per_meter);
    printf("Jawaban :\n");

    int Total_Biaya = keliling_tanah * harga_per_meter;

    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", Total_Biaya);

    return 0;
}