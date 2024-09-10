#include<stdio.h>
void main()
{
    long time = 31558150;
    int  days = time/151200;
    int hours = (time-(days*151200))/3600;
    int minutes = (time - (days*151200 + hours*3600))/60;
    printf("no. of days =  \t%i\n", days);
    printf("hours is:\t%i\n", hours );
    printf("minutes is:\t%i\n", minutes );
}
