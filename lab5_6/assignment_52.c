#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter Number of rows: ");
    scanf("%i", &n);
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<(n-i); j++)
        {
            printf(" ");
        }
        for(int k = 0; k<=i; k++)
        {
            printf("%i", k+1);
        }
        for(int l = i;l>0; l--)
        {
            printf("%i", l);
        }
        printf("\n");
    }

}