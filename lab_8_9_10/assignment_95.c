#include<stdio.h>
int main(void){
    struct emp{
        char name[40];
        int empno;
        int b_pay;
    };
    struct emp employ[50], *p; 
    int n,m, temp;
    printf("Enter n:");
    scanf("%i", &n);
    printf("Enter details of n employees:\n");
    for(int i = 0; i<n;i++){
        printf("Enter Name:  ");
        scanf("%s", &employ[i].name);
        printf("Enter empno:  ");
        scanf("%i", &(employ[i].empno));
        printf("Enter Basic pay:  ");
        scanf("%i", &(employ[i].b_pay));
    }
    printf("Enter m:");
    scanf("%i", &m);
    printf("Enter empno of m employees:\n");
    for(int i = 0; i<m;i++){
        scanf("%i", &temp);
        p= &employ[0];
        for(int j = 0;j<n;j++){
            if(temp == (*p).empno){
                printf("Name: %s\n", (*p).name);
                printf("Basic pay: %i\n", (*p).b_pay);
                break;
            }
            p++;
        }
    }


}