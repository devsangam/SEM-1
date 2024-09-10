//simple Intrest
#include<stdio.h>
void main()
{
    float p, r, t;
    printf("Enter Principal, Time and Rate\n");
    scanf("%f%f%f", &p, &t, &r);
    printf("simple Intresst is:\t%.2f\n", p*r*t/100);
    printf("Amount is:\t%.2f",p+(p*r*t/100) );
}
