#include<stdio.h>
#include<stdlib.h>
int main(void){
    int *n = malloc(sizeof(int));
    scanf("%i", n);
    int val;
    scanf("%i", &val);
    *n = val;
    printf("n is %i\n", *n);
}