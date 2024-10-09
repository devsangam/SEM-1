#include<stdio.h>
int main (void)
{
    int n, vote, i=0;
    printf("Enter number of votes tou want to cast:");
    scanf("%i", &n);
    int variable_count[5] = {0, 0, 0, 0, 0};
    for(int j = 0;j<n;j++)
    {
        printf("Enter vote:  ");
        scanf("%i", &vote);
        switch (vote)
        {
            case 1:
                variable_count[0]++;
                break;
            case 2:
                variable_count[1]++;
                break;
            case 3:
                variable_count[2]++;
                break;
            case 4:
                variable_count[3]++;
                break;
            case 5:
                variable_count[4]++;
                break;
            default:
                printf("Spoiled ballot");
        }
    }
    for(int k = 0;k<5;k++)
    {
        if(variable_count[k]>variable_count[i])
        {
            i = k;
        }
    }
    printf("The winner is, %ith candidate", i+1);
}