//find grater of 3 number
#include<stdio.h>
int main(void)
{
    int a, b, c;
    printf("enter 3 numbers\n");
    scanf("%i%i%i",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("a");
    }
    else if(a<b && c<b)
    {
        printf("b");
    }
    else if(a<c && c>b)
    {
        printf("c");
    }
    return 0;
}