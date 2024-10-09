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
    int min, i_min;
    for(int j = 0; j<n; j++)
    {
        min = arr[j];
        i_min = j;
        for(int k = j+1; k<n; k++)
        {
            if(arr[k]<min)
            {
                min = arr[k];
                i_min = k;
            }
        }
        arr[i_min] = arr[j];
        arr[j] = min;
    }
    printf("\nafter sort, array is:\n");
    for(int l = 0; l<n; l++)
    {
        printf("%i  ", arr[l]);
    }
}