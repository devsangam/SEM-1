#include<stdio.h>
int main(void)
{
    int rev_num = 0, n;
    printf("Enter a number:  ");
    scanf("%i", &n);
    int num = n;
    while(n>=1)
    {
        rev_num = rev_num*10 + n%10;
        n /=10;
    }
    if(num==rev_num)
    {
        printf("number is palindrome\n");
    }
    else
    {
        printf("number is not palindrome\n");
    }
}