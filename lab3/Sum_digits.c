#include<stdio.h>
int main(void)
{
    int sum = 0, n;
    printf("Enter a number:  ");
    scanf("%i", &n);
    while(n>=1)
    {
        sum = sum + n%10;
        n /=10;
    }
    printf("Sum of digits of the number is:\t%i\n", sum);
}