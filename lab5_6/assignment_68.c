#include<stdio.h>
int main (void)
{
    printf("Enter matrix A\n");
    int arr_1[3][3], arr_2[3][3], arr_3[3][3];
    for(int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("Enter element (%i, %i ): ", i+1, j+1);
            scanf("%i", &arr_1[i][j]);
        }
    }
        printf("Enter matrix B\n");
    for(int k = 0; k<3; k++)
    {
        for (int l = 0; l<3; l++)
        {
            printf("Enter element (%i, %i ): ", k+1, l+1);
            scanf("%i", &arr_2[k][l]);
        }
    }
    for(int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            arr_3[i][j] = 0;
            for(int k = 0; k<3; k++)
            {
                arr_3[i][j] += arr_1[i][k]*arr_2[k][j];
            }
            printf("Element(%i, %i), of matrix A x B is %i\n", i+1, j+1, arr_3[i][j]);
        }
    }
}
