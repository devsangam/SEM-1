#include<stdio.h>

int main() 
{
    int s1, s2, s3, s4, s5;
    scanf("%i%i%i%i%i", &s1,&s2,&s3,&s4,&s5);
    int total = s1 + s2 + s3 + s4 + s5;
    float per;
    per = (float) total/5;
    if (per >= 60)
    {
        printf("First division\n");
    }
    else if (per >= 50)
    {
        printf("Second division");
    } 
    else if (per >= 40) 
    {
        printf("Third division");
    } 
    else 
    {
        printf("Fail\n");
    }
}