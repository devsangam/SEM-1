#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter the value of N:\t");
    scanf("%i", &n);
    for(int i =1; i<=10; i++)
    {
        printf("%i * %i = %i\n", n, i, n*i);
    }
    int i =1;
    while(i<=10)
    {
        printf("%i * %i = %i\n", n, i, n*i);
        i++;
    }
    int i =1;
    do
    {
        printf("%i * %i = %i\n", n, i, n*i);
        i++;
    } 
    while(i<=10);
    

}
