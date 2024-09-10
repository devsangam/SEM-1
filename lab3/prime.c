#include <stdio.h>
int main(void)
{
    int n, f=0;
    printf("Enter value of n\n");
    scanf("%i", &n);
    for(int i = 1; i<=n; i++)
    {
        if(n%i==0)
        {
            f++;
        }
    }
    if(f==2)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Not Prime");
    }
}