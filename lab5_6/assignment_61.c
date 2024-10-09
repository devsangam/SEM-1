#include<stdio.h>
int main (void)
{
    printf("Enter number of elements you want to enter in the array:");
    int n;
    scanf("%i", &n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        printf("Enter element: ");
        scanf("%i", &arr[i]);
    }
    int swap_val, swaps;
    do
    {
        swaps = 0;
        for(int i = 0; i<(n-1); i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap_val = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = swap_val;
                swaps++;
            }
        }
    }while(swaps!=0);
    printf("\nafter sort, array is:\n");
    for(int l = 0; l<n; l++)
    {
        printf("%i  ", arr[l]);
    }
}