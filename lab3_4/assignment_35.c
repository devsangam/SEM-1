#include<stdio.h>
int onedigitsum(int n);
int main(void)
{
    int n;
    printf("Enter a number:  ");
    scanf("%i", &n);
    printf("Sum of digits is %i", onedigitsum(n));
}

int onedigitsum(int n)
{
    int sum = 0;
    while(n>=1)
    {
        sum = sum + n%10;
        n /=10;
    }
    if(sum<=9)
    {
        return sum;
    }
    else
    {
        onedigitsum(sum);
    }
}
