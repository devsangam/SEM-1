#include<stdio.h>
int main (void)
{
    int arr[3][3], sum_row[3];
    for(int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("Enter element (%i, %i ): ", i+1, j+1);
            scanf("%i", &arr[i][j]);
        }
        sum_row[i] = arr[i][0]+arr[i][1]+arr[i][2];
    }
    printf("sum of rows 1 , 2 and 3 respectively are: %i, %i, %i\n", sum_row[0], sum_row[1], sum_row[2]);
}