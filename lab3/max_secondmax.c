#include<stdio.h>
int main(void)
{
    int max = 0, max_2 = 0, n;
    printf("Enter value of n:  ");
    scanf("%i", &n);
    int x;
    for(int i = 0; i<n; i++)
    {
        printf("Enter number:\n");
        scanf("%i", &x);
        if (x>max)
        {
            max_2 = max;
            max = x;
        }
        
    }
    printf("MAX AND SECOND MAX numbers are %i, %i respectively.\n", max, max_2);
}