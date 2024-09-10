#include <stdio.h>
int main(void)
{
    int n;
    int odd = 0, even = 0;
    printf("Enter value of n\n");
    scanf("%i", &n);
    for(int i = 1;i<=n;i++)
    {
        if(i%2==0)
        {
            even +=i;
        }
        else
        {
            odd +=i;
        }
    }
    printf("sum of odd no is:\t%i\nSum of even no is:\t%i\n", odd, even);
    
}