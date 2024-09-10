#include<stdio.h>
void main()
{
    int x, y;
    x= 10;
    y=20;
    printf("x and y are:\t%i, %i\n", x, y);
    x,y=y,x;
    printf("After swapping, x and y are:\t%i, %i\n", x, y);
}
