#include<stdio.h>
void main()
{
    char c;
    printf("Enter char:\n");
    scanf("%c", c);
    if(c>='a' && c<='z')
    {
        printf("lower");
    }
    else if(c>='A' && c<='Z')
    {
        printf("UPPER");
    }
    else if(c>=48 && c<=57)
    {
        printf("digit");
    }
    else
    {
        printf("Symbol");
    }
}
