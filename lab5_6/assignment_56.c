#include<stdio.h>
int main (void)
{
    int arr[10];
    int pos = 0, neg = 0, zro = 0;
    for(int i = 0; i<10; i++)
    {
        printf("Enter element: ");
        scanf("%i", &arr[i]);
        if(arr[i]>0)
        {
            pos+=1;
        }
        else if (arr[i]<0)
        {
            neg+=1;
        }
        else
        {
            zro+=1;
        }
    }
    printf("number of positive elements is: %i\n", pos);
    printf("number of negative elements is: %i\n", neg);
    printf("number of zero elements is: %i\n", zro);

}