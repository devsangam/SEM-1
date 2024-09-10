#include <stdio.h>
int main(void)
{
    int t1= 0, t2=1, n;
    printf("Enter number of terms to print:  ");
    scanf("%i", &n);
    printf("%i, %i", t1, t2);
    for(int i = 2; i<n; i++)
    {
        t2 = t2 + t1;
        t1 = t2-t1;
        printf(", %i", t2);
    }
}
