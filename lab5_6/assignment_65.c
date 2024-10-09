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
    for(int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("Element (%i, %i ) after transpose is : %i\n", i+1, j+1, arr[j][i]);
        }
    }
}