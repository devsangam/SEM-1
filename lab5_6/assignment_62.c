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
    int temp;
    for(int j = 0, k = n-1; j<n/2; j++, k--)
    {
        temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
    }
    printf("\nafter reversing, array is:\n");
    for(int l = 0; l<n; l++)
    {
        printf("%i  ", arr[l]);
    }
}