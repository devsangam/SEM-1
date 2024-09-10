//find grater of 3 number
#include<stdio.h>
int main(void)
{
    int a, b, c;
    printf("enter 3 numbers\n");
    scanf("%i%i%i",&a,&b&,c);
    if (a>b)
    {
        if(a>c)
        {
            printf("a");
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("b");
        }
    }
    else if(c>a)
    {
        if(c>b)
        {
            printf("b");
        }
    }
}