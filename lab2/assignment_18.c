//find grater of 3 number
#include<stdio.h>
int main(void)
{
    int n1, n2, n3;
    printf("enter 3 numbers\n");
    scanf("%i%i%i",&n1, &n2, &n3);
    int max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
    printf("max%i\n", max);
}
