#include <time.h>
#include<stdio.h>

int main(void)
{
    int num, count = 0;
    int r = time(NULL)%100;
    printf("********************\n");
    printf("*Random number game*\n");
    printf("********************\n");
    do
    {
        switch (count)
        {
            case 1:
                printf("The number is between %i and %i\n", 20*(r/20), 20*(r/20)+20);
                break;
            case 2:
                printf("The number is between %i and %i\n", 10*(r/10),  10*(r/10)+10);
                break;
            case 3:
                if (num%2==0)
                {
                    printf("The number is even\n");
                }
                else
                {
                    printf("The number is odd\n");
                }
                break;
        }
        printf("Enter your guess: ");
        scanf("%i", &num);
        count++;
    } while(num!=r);
    printf("Success!!!, you guessed the correct number in %i tries", count);
}