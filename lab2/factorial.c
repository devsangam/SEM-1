#include <stdio.h>
int main(void)
{
    int x;
    int f = 1;
    printf("Enter Number");
    scanf("%i", &x);
    if (x==0)
    {
        printf("factorial is %i\n", f);
        return 0;
    }
    for(int i = 1; i<=x; i++ )
    {
        f *= i;
    }
        printf("factorial is %i\n", f);
    return 0;
}