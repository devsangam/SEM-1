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


    int num, occr = 0;
    printf("Enter number to search:");
    scanf("%i", &num);

    for(int j = 0; j<n; j++)
    {
        if(arr[j] == num)
        {
            occr+=1;
        }
    }
    printf("The element %i, occurs %i times", num, occr);
    return 0;
}