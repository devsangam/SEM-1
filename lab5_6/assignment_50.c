#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter Number of rows");
    scanf("%i", &n);
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            printf("%c", i+65);
        }
    printf("\n");
    }

}