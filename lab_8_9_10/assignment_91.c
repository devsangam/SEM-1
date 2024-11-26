#include<stdio.h>
int main(){int n, *p = &n;scanf("%i", &n);printf("cube is: %i\nsquare is: %i\n", (*p)*(*p)*(*p), (*p)*(*p));  }
