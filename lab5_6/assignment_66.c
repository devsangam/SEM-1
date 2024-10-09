#include<stdio.h>
int main (void)
{
    int arr_1[3][3], arr_2[3][3], arr_3[3][3];
    for(int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("Enter element (%i, %i ): ", i, j);
            scanf("%i", &arr_1[i][j]);
        }
    }
    for(int k = 0; k<3; k++)
    {
        for (int l = 0; l<3; l++)
        {
            printf("Enter element (%i, %i ): ", k, l);
            scanf("%i", &arr_2[k][l]);
            arr_3[k][l] = arr_1[k][l]+arr_2[k][l];
        }
    }
    printf("Printing array 3");
    for(int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("Element (%i, %i ) is : %i\n", i+1, j+1, arr_3[i][j]);
        }
    }
}