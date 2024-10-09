#include<stdio.h>
int bin_search(int arr[], int right, int left);
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
    int x = bin_search(arr, n-1, 0);
    printf("Array is pivoted at %ith position and pivot element is, %i", x+1, arr[x]);
}

//function to return position of pivot element. 
int bin_search(int arr[], int right, int left )
{
    int mid = (left+right)/2;
    if (arr[mid]<arr[mid-1])
    {
        return(mid);
    }
    else
    {
        if(arr[mid]>arr[right])
        {
            return bin_search(arr, right, mid);
        }            
        else
        {
            return bin_search(arr, mid, 0);
        }
    }
}