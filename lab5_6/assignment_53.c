#include <stdio.h>
int main(void)
{
    int  n;
    printf("Enter value of n: ");
    scanf("%i", &n);
    for(int i = 0; i<(2*n-1); i+=2)
    {
        for(int j = 0; j<(2*n-1-i); j++)
        {
            printf(" ");
        }
        for(int k = 0; k<=i; k++)
        {
            printf("* ");
        }
    printf("\n");
    }
    for(int i = 2*n-3; i>0; i-=2)
    {
        for(int j = 0; j<(2*n-1-i); j++)
        {
            printf(" ");
        }
        for(int k = 0; k<i; k++)
        {
            printf("* ");
        }
    printf("\n");
    }
}