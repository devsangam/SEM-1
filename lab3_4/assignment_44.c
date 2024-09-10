#include<stdio.h>
int main(void)
{
    float unit, charge;
    printf("Enter number of units consumed: \n");
    scanf("%f",&unit);
    while (unit<0)
    {
    printf("wrong input, Enter again:\n");
    scanf("%f",&unit);
    }
    if (unit<=200)
    {
        charge = 0.50*unit;
    }
    else if(unit<=400)
    {
        charge = 100+(0.65*(unit-200));
    }
    else if(unit<=600)
    {
        charge = 230+(0.80*(unit-400));
    }
    else
    {
        charge = 425+(1.25*(unit-600));
    }
    printf("%f", charge);
}
