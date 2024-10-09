#include<stdio.h>
int main (void)
{
    int arr[10];
    int sum = 0;
    for(int i = 0; i<10; i++)
    {
        printf("Enter element: ");
        scanf("%i", &arr[i]);
        sum+=arr[i];
    }
    printf("sum of elements is: %i\n", sum);
}