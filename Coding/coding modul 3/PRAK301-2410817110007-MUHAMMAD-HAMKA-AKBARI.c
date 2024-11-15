// #include <stdio.h>

// int main()
// {
//     int a, b;

//     scanf("%d %d", &a, &b);

//     if(a > b)
//     {
//         printf("%d %d", b, a);
//     }
//     else{
//         printf("%d %d", a, b);
//     }

//     return 0;
// }

#include <stdio.h>

void Short_three_Number(int input_1, int input_2, int input_3)
{
    int temp;
    if(input_1 > input_2){
        temp = input_1;
        input_1 = input_2;
        input_2 = temp;
    }

    if(input_2 > input_3){
        temp = input_2;
        input_2 = input_3;
        input_3 = temp;
    }

    if(input_1 > input_2){
        temp = input_2;
        input_2 = input_1;
        input_1 = temp;
    }

    printf("%d %d %d", input_1, input_2, input_3);
}

int main()
{
    int input_1, input_2, input_3;
    scanf("%d %d %d", &input_1, &input_2, &input_3);

    Short_three_Number(input_1, input_2, input_3);

    return 0;
}