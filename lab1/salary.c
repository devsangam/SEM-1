#include<stdio.h>
void main()
{
    int basic, hra, tax, pf, oa;
    printf("Enter Basic Salary, House rent allownce, Tax, Pf, and Other allowancees:\n");
    scanf("%i%i%i%i%i", &basic, &hra, &tax, &pf, &oa);
    printf("Gross Salary is:\t%i\n", basic+hra+tax+pf+oa);
}