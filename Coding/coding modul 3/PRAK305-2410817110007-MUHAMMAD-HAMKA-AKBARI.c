#include <stdio.h>

void convertTime(int detik) {
    int hari = detik / 86400;          // 1 day = 86400 seconds
    detik %= 86400;
    int jam = detik / 3600;          // 1 hour = 3600 seconds
    detik %= 3600;
    int minutes = detik / 60;          // 1 minute = 60 seconds
    detik %= 60;

    if (hari > 0) {
        // If there are days, print the format with "hari"
        printf("%d hari %02d:%02d:%02d\n", hari, jam, minutes, detik);
    } 
    else {
        // If there are no days, print only the "hh:mm:ss" format
        printf("%02d:%02d:%02d\n", jam, minutes, detik); // %03d = 000
    }
}

int main() {
    int detik;

    printf("Masukkan jumlah detik: ");
    scanf("%d", &detik);

    convertTime(detik);

    return 0;
}