#include<stdio.h>
int main(void)
{
    int rev_num = 0, n;
    printf("Enter a number:  ");
    scanf("%i", &n);
    while(n>=1)
    {
        rev_num = rev_num*10 + n%10;
        n /=10;
    }
    printf("reversed number is:\t%i\n", rev_num);
}