#include<stdio.h>
#include <string.h>
#include<stdlib.h>
int main(void){
    int n, swaps;
    printf("Enter n: ");
    scanf("%i", &n);
    getchar();
    char *p[n], temp[40], *p_t;
    for(int i = 0; i<n;i++){
        p[i] = malloc(40);
        fgets(p[i], 40, stdin);
    }
    p_t=temp;
    while(1){
        swaps = 0;
        for(int i = 0; i<n-1; i++){
            if((strcmp(p[i], p[i+1]))>0){
                strcpy(p_t, p[i]);
                strcpy(p[i], p[i+1]);
                strcpy(p[i+1], p_t);
                swaps++;
            }
        }
        if(swaps==0){
            break;
        }
    }
    printf("\n");
    for(int i; i<n;i++){
        printf("%s", *p[i]);
    }
}
