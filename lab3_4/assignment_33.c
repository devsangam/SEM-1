#include<stdio.h>
int main(void)
{
    int max = 0, min = 0, n;
    printf("Enter value of n:  ");
    scanf("%i", &n);
    int x;
    printf("Enter number:\n");
    scanf("%i", &x);
    min = x;
    max = x;
    for(int i = 1; i<n; i++)
    {
        printf("Enter number:\n");
        scanf("%i", &x);
        if (x>max)
        {
            max = x;
        }
        else if(x<min)
        {
            min = x;
        }
    }
    printf("MAX AND SECOND MAX numbers are %i, %i respectively.\n", max, min);
}
