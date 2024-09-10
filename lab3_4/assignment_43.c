#include<stdio.h>
int main(void)
{
    float sale, comisn;
    printf("Enter Sales amount: \n");
    scanf("%f",&sale);
    while (sale<0)
    {
    printf("wrong input, Enter again:\n");
    scanf("%f",&sale);
    }
    if (sale<500)
    {
        comisn = 0.05*sale;
    }
    else if(sale<=2000)
    {
        comisn = 35+(0.10*(sale-500));
    }
    else if(sale<=5000)
    {
        comisn= 185+(0.12*(sale-2000));
    }
    else
    {
        comisn = 0.125*sale;
    }
    printf("%f", comisn);
}
