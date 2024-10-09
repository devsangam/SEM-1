#include<stdio.h>
int main (void)
{
    int arr_1[10], arr_2[10], arr_3[10];
    printf("Enter first array:\n");
    for(int i = 0; i<10; i++)
    {
        printf("Enter element: ");
        scanf("%i", &arr_1[i]);
        arr_3[i] = arr_1[i];
    }
    printf("Enter second array:\n");
    for(int j = 0; j<10; j++)
    {
        printf("Enter element: ");
        scanf("%i", &arr_2[j]);
        arr_3[j] += arr_2[j];
    }
    printf("Final array is:\n");
    for(int k = 0; k<10; k++)
    {
        printf("%i  ", arr_3[k]);
    }
}