#include <stdio.h>

int power(int n,int pwr);
int length(int n);

int main(void)
{
    int n, res = 0;
    printf("Enter number:\n");
    scanf("%i", &n);
    int num = n;
    int l = length(n);
    for(int i = 0;i<l;i++)
    {
        res += power(num%10,l);
        num = num/10;
    }
    if(n == res)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("number is not armstrong");
    }
}


int power(int n,int pwr)
{
    int res = 1;
    for(int i =0;i<pwr;i++)
    {
        res *=n;
    }
    return res;
}


int length(int n)
{
    int len = 0;
    while(n>=1)
    {
        n /= 10;
        len++;
    }
    return len;
}