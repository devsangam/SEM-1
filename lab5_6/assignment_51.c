#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter Number of rows");
    scanf("%i", &n);
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if (i==j)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    printf("\n");
    }

}