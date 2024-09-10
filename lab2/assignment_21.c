#include <stdio.h>
int main(void)
{
    float a,b;
    char x;
    printf("Enter numbers:\n");
    scanf("%f%f", &a, &b);
    printf("Enter a for add\nEnter s for subtract\nEnter m for multiply\nEnter d for divide\n ");
    scanf("%c",&x );
    switch (x)
    {
        case 'a':
            printf("%f\n", a+b);
            break;
        case 's':
            printf("%f\n", a-b);
            break;
        case 'm':
            printf("%f\n", a*b);
            break;
        case 'd':
            printf("%f\n", a/b);
            break;
        default:
            printf("wrong input");
            break;
    }
    return 0;
}
