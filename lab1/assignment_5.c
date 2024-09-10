#include<stdio.h>
void main()
{
    int x, y, z;
    x= 10;
    y=20;
    printf("x and y are:\t%i, %i\n", x, y);
    z=x;
    x=y;
    y=z;
    printf("After swapping, x and y are:\t%i, %i\n", x, y);
}
