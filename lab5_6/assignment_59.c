#include<stdio.h>
int main (void)
{
    int arr_1[10], arr_2[10];
    printf("Enter first array:\n");
    for(int i = 0; i<10; i++)
    {
        printf("Enter element: ");
        scanf("%i", &arr_1[i]);
    }
    printf("Enter second array:\n");
    for(int j = 0; j<10; j++)
    {
        printf("Enter element: ");
        scanf("%i", &arr_2[j]);
    }
    int temp;
    for(int k = 0; k<10; k++)
    {
        temp = arr_1[k];
        arr_1[k] = arr_2[k];
        arr_2[k] = temp;
    }
    printf("arr_1 after swap is:\n");
    for(int k = 0; k<10; k++)
    {
        printf("%i  ", arr_1[k]);
    }
    printf("\narr_2 after swap is:\n");
    for(int k = 0; k<10; k++)
    {
        printf("%i  ", arr_2[k]);
    }
}