#include<stdio.h>
int main(void)
{
    int sec, hr, min;
    printf("Enter Hours Minutes and Seconds in order\n");
    scanf("%i%i%i", &hr, &min, &sec);
    printf("Total seconds are:\t%i", (hr*3600) + (min*60) + sec);
}
