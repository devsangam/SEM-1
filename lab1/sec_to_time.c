#include<stdio.h>
void main()
{
    printf("Enter time in seconds:\n");
    int s, sec, hr, min;
    scanf("%i", s);
    hr = s/3600;
    min = (s-(hr*3600))/60;
    sec = s-((hr*3600)+(min*60));
    printf("Time in H:M:S format is %i:%i:%i", hr, min, sec);
}