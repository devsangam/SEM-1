#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of terms to print:\n");
    scanf("%i", &n);
    for(int i = 1;i<=n;i++)
    {
        printf("%i, ", i*i);
    }
}