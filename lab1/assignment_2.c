#include<stdio.h>
void main()
{
    float a, b, c, d, e;
    printf("Enter marks of five subjects:\n");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    printf("Total marks is:\t%.2f\n", a+b+c+d+e);
    printf("Percentage is:\t%.2f\n", (a+b+c+d+e)/5);
}
