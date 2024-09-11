#include<stdio.h>
int main(void)
{
    printf("enter a character");
    char x;
    int y;
    scanf("%c", &x);
    y = (x>= 'a' && x<='z')? 1 : 0;
    if(y==1)
    {
        printf("lowercase");
    }
    else
    {
        printf("NOT lowercase");

    }
}
