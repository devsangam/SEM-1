#include<stdio.h>

int main(void)
{
    float head_size;
    printf("********************\n");
    printf("*  Hat Size finder *\n");
    printf("********************\n");
    char size[3][12] = {{'6', '6', '6', '6', '7', '7', '7', '7', '7', '7', '7', '7'}, {'1', '5', '3', '7', ' ', '1', '1', '3', '1', '5', '3', '7'}, {'2', '8', '4', '8', ' ', '8', '4', '8', '2', '8', '4', '8'}};
    printf("Enter your head Size in inches:");
    int index;
    scanf("%f", &head_size);
    head_size *= 8;
    int headsize[13] = {164,166,169,172,175,178,181,184,188,191,194,197,202};
    for (int i = 0; i<12;i++)
    {
        if (head_size>= headsize[i] &&  head_size<= headsize[i+1])
        {
            printf("Your head size is: %c %c%c%c\n", size[0][i], size[1][i], (size[1][i]==' ') ? ' ' : '/' , size[2][i]);
            return 0;
        }
    }
    printf("Size entered is too small or too large.\n");
    return 1;
}