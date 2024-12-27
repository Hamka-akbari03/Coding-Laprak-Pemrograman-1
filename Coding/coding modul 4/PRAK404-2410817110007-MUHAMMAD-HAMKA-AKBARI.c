#include <stdio.h>

int main()
{
    int pilihan;
    float nilai1, nilai2, hasil;

    while(1){
    printf("Pilih program");
    printf("\n1. Penjumlahan");
    printf("\n2. Pengurangan");
    printf("\n3. Perkalian");
    printf("\n4. Pembagian");
    printf("\n5. Exit");

    printf("\nMasukkan pilihan : ");
    scanf("%d", &pilihan);

    if(pilihan == 5){
        printf("Terimakasih telah menggunakan kalkulator Muhammad Hamka Akbari\n");
        break;
    }

    if(pilihan < 1 || pilihan > 5){
        printf("Input anda salah, silahkan coba lagi\n");
        continue;
    }

    printf("Masukkan nilai pertama : ");
    scanf("%f", &nilai1);

    printf("Masukkan nilai kedua : ");
    scanf("%f", &nilai2);

    switch(pilihan){
        case 1:
        hasil = nilai1 + nilai2;
        printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
        break;
        case 2:
        hasil = nilai1 - nilai2;
        printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
        break;
        case 3:
        hasil = nilai1 * nilai2;
        printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
        break;
        case 4:
        if(nilai2 == 0){
            printf("Tidak bisa dibagi 0/NOL!\n");
            break;
        }else{
        hasil = nilai1 / nilai2;
        printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", nilai1, nilai2, hasil);
        break;
        }
    }
    break;
    }

    return 0;
}