#include<stdio.h>
int main (void)
{
    int n_arr_1, n_arr_2, temp_1=0, temp_2=0;
    printf("Enter number of elements you want to enter in the first array:");
    scanf("%i", &n_arr_1);
    int arr_1[n_arr_1];
    for(int i = 0; i<n_arr_1; i++)
    {
        printf("Enter element: ");
        scanf("%i", &arr_1[i]);
    }

    printf("Enter number of elements you want to enter in the second array:");
    scanf("%i", &n_arr_2);
    int arr_2[n_arr_2];
    for(int i = 0; i<n_arr_2; i++)
    {
        printf("Enter element: ");
        scanf("%i", &arr_2[i]);
    }



    const int n = n_arr_1+n_arr_2;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        if(arr_1[temp_1]<arr_2[temp_2])
        {
            arr[i]= arr_1[temp_1];
            temp_1++;
        }
        else
        {
            arr[i]= arr_2[temp_2];
            temp_2++;
        }
    }

    printf("[ ");
    for(int i = 0; i<n; i++)
    {
        printf("%i  ", arr[i]);
    }
    printf("]\n");
}