#include <stdio.h>

int main()
{
    int bilangan_cacah;

    scanf("%d", &bilangan_cacah);

    if(bilangan_cacah == 0){
        printf("Nol");
    }
    else if(bilangan_cacah >= 1 && bilangan_cacah <= 9){
        printf("Satuan");
    }
    else if(bilangan_cacah == 10){
        printf("Puluhan");
    }
    else if(bilangan_cacah >= 11 && bilangan_cacah <= 19){
        printf("Belasan");
    }
    else if(bilangan_cacah >= 20 && bilangan_cacah <= 99){
        printf("Puluhan");
    }
    else{
        printf("Anda Menginput Melebihi Limit Bilangan");
    }

    return 0;
}