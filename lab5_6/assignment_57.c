#include<stdio.h>
#include <limits.h>
int main (void)
{
    int arr[10];
    int pos = 0;
    for(int i = 0; i<10; i++)
    {
        printf("Enter element: ");
        scanf("%i", &arr[i]);
    }
    int max =INT_MIN,  sec_max =INT_MIN;
    for(int i = 0; i<10; i++)
    {
        if(arr[i]>max)
        {
            sec_max=max;
            max = arr[i];
        }
        else if (arr[i]>sec_max)
        {
            sec_max = arr[i];
        }
        
    }
    
    printf("number of max element is: %i\n", max);
    printf("number of second max elements is: %i\n", sec_max);

}