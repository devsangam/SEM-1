#include<stdio.h>
int main (void)
{
    printf("Enter number of elements you want to enter in the array:");
    int n_arr, n, temp;
    scanf("%i", &n_arr);
    int arr[n_arr];
    for(int i = 0; i<n_arr; i++)
    {
        printf("Enter element: ");
        scanf("%i", &arr[i]);
    }
    printf("Enter number of positions you want to pivot the array:");
    scanf("%i", &n);
    for(int i=0; i<n;i++ )
    {
        temp = arr[n_arr-1];
        for(int j = n_arr-2;j>=0;j--)
        {
            arr[j+1] = arr[j];
        }
        arr[0]= temp;
    }
    printf("[");
    for(int i = 0; i<n_arr; i++)
    {
        printf("%i  ", arr[i]);
    }
    printf("]\n");
}