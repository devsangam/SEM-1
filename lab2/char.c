#include<stdio.h>
int main(void)
{
    printf("enter a character");
    char x;
    scanf("%c", &x);
    if (x>= 'a' && x<='z')
    {
        printf("lowercase");
    }
    else
    {
        printf("NOT lowercase");

    }
}