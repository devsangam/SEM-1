#include <stdio.h>
int main(void)
{
    int x, y;
    int f = 1;
    printf("Enter Number:\t");
    scanf("%i", &x);
    int ans = 1;
    printf("Enter power:\t");
    scanf("%i", &y);
    for(int i =0; i<y; i++)
    {
        ans *=x;
    }
    printf("answer is:\t%i\n", ans);
}