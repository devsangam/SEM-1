#include<stdio.h>
#include <limits.h>
int main(void){
    printf("Enter n:  ");
    int n;
    scanf("%i", &n);
    int lst[n];
    for(int i=0;i<n;i++){
        printf("Enter Number:  ");
        scanf("%i", &lst[i]);
    }
    int *p = &lst[0];
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(*p>max){
            max = *p;
        }
        p++;
    }
    printf("Largest number is: %i\n", max);
}