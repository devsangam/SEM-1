#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of terms to print:\n");
    scanf("%i", &n);
    int x = 2*n;
    for(int i = 1;i<=x;i+=2)
    {
        printf("%i, ", i);
    }
}