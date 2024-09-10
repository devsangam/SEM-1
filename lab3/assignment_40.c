#include <stdio.h>
int main(void)
{
    float n = 0, sum = 0;
    while(1)//infinite loop
    {
        printf("Enter Number:\t");
        scanf("%f", &n);
        if(n<0)
        {
            printf("%f", sum);
            return 0;
        }
        else
        {
            sum += n;
        }
    }
}