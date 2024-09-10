#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter value of n\n");
    scanf("%i", &n);
    printf("factors are:\t");
    for(int i = 1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%i, ", i);
        }
    }
}