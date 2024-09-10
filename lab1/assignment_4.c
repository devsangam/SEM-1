#include<stdio.h>
void main()
{
    float temp;
    printf("Enter Temprature in FAHRENHEIT :\n");
    scanf("%f", &temp);
    printf("Temprature in Celsius is:\t%.2f\n", (temp-32)/1.8);
}
