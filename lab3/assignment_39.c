#include <stdio.h>
long int factorial(int x);
int main(void)
{
    double sum = 0;
    int n;
    printf("Enter number of terms: ");
    scanf("%i", &n);
    for(int i = 1; i<=n; i++)
    {
        sum += (double) i/(double) factorial(i);
    }
    printf("sum of series is: %lf", sum);
}
long int factorial(int x)
{
    int f = 1;
    if (x==0)
    {
        printf("factorial is %i\n", f);
        return f;
    }
    for(int i = 1; i<=x; i++ )
    {
        f *= i;
    }
    return f;
}