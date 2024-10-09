#include<stdio.h>
int main (void)
{
    int arr[10];
    int odd = 0, even = 0;
    for(int i = 0; i<10; i++)
    {
        printf("Enter element: ");
        scanf("%i", &arr[i]);
        if(arr[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
    printf("number of even elements is: %i\n", even);
    printf("number of odd elements is: %i\n", odd);

}