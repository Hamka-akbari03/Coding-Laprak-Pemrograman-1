#include <stdio.h> 

int angka_Maks(int a, int b, int c, int d)
{
    int max = a; // Anggap a adalah yang terbesar
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    return max;
} 

int main() 
{ 
    int a, b, c, d; 
    scanf("%d %d %d %d", &a, &b, &c, &d); 
    int hasil = angka_Maks(a, b, c, d); 
    printf("%d", hasil); 

return 0; 
} 
