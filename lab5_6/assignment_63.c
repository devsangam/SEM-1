#include<stdio.h>
int main (void)
{
    int arr[3][3];
    for(int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("Enter element (%i, %i ): ", i+1, j+1);
            scanf("%i", &arr[i][j]);
        }
    }
    int max = arr[0][0], min = arr[0][0];
    for(int i = 0; i<3; i++)
    {
    for (int j = 0; j<3; j++)
        {
            if (max<arr[i][j])
            {
                max = arr[i][j];
            }
            else if (min>arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    printf("max and min element are %i and %i", max, min);
}