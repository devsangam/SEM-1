#include<stdio.h>
int main (void)
{
    printf("Enter number of elements you want to enter in the array:");
    int arr[10][5];
    for(int i = 0; i<10; i++)
    {
        printf("Enter roll number, Marks of subject 1, subject 2 and subject 3 respectively :");
        scanf("%i%i%i%i", &arr[i][0], &arr[i][1],&arr[i][2],&arr[i][3]);
        arr[i][4] = arr[i][1]+arr[i][2]+arr[i][3];
    }
    int s1=0, s2=0, s3=0, tot=0;
    for(int i = 0; i<10; i++)
    {
        if(arr[i][1]>arr[s1][1])
        {
            s1 = i;
        }
            if(arr[i][2]>arr[s2][2])
        {
            s2 = i;
        }
        if(arr[i][3]>arr[s3][3])
        {
            s3 = i;
        }
        if(arr[i][4]>arr[tot][4])
        {
            tot = i;
        }
    }
    for(int i = 0; i<10; i++)
    {
        printf("Total marks of roll number %i, is %i\n", arr[i][0], arr[i][4]);
    }
    printf("highest marks of subject 1 is %i, scored by roll number %i\n", arr[s1][0], arr[s1][1]);
    printf("highest marks of subject 2 is %i, scored by roll number %i\n", arr[s2][0], arr[s1][2]);
    printf("highest marks of subject 3 is %i, scored by roll number %i\n", arr[s3][0], arr[s3][3]);
    printf("highest total marks is %i, scored by roll number %i\n", arr[tot][0], arr[tot][4]);
}