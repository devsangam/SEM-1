#include <stdio.h>
int main(void)
{
    float x;
    int n;
    printf("Enter value of x\n");
    scanf("%f", &x);
    printf("Enter value of n\n");
    scanf("%i", &n);
    switch (n)
    {
        case 1:
            printf("value of y is:%f", 1+x);
            break;
        case 2:
            printf("value of y is:%f", 1+x/n);
            break;
        case 3:
            printf("value of y is:%f", 1+x*x*x);
            break;
        default:
            printf("value of y is:%f", 1+n*x);
            break;

    }
}    