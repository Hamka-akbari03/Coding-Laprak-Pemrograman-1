#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    if(N >= 1){
        printf("Positif");
    }
    else if(N <= -1){
        printf("Negatif");
    }
    else{
        printf("Nol");
    }

    return 0;
}