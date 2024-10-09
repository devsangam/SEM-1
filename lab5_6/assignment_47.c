#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter Number of rows");
    scanf("%i", &n);
    for(int i = 0; i<n; i++)
    {
        for(int j = 65; j<=(i+65); j++)
        {
            printf("%c", j);
        }
    printf("\n");
    }

}