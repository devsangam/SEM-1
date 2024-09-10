//simple calculator
#include <stdio.h>
int main(void)
{
    float a,b;
    int x;
    printf("Enter numbers:\n");
    scanf("%f%f", &a, &b);
    printf("Enter 1 for add\nEnter 2 for subtract\nEnter 3 for multiply\nEnter 4 for divide\n ");
    scanf("%i",&x );
    switch (x)
    {
        case 1:
            printf("%f\n", a+b);
            break;
        case 2:
            printf("%f\n", a-b);
            break;
        case 3:
            printf("%f\n", a*b);
            break;
        case 4:
            printf("%f\n", a/b);
            break;
        default:
            printf("wrong input");
            break;
    }
    return 0;
}
