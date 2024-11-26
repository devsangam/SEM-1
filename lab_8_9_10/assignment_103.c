#define larger(n1, n2) (n1>n2)?n1:n2
#include<stdio.h>
int main(){
    int a, b;
    scanf("%i%i", &a, &b);
    printf("grater no is: %i\n", larger(a,b));
}