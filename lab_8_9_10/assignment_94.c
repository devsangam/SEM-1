#include<stdio.h>
#include<string.h>
int main(void){
    char arr[100];
    char arr2[100];
    fgets(arr, 100, stdin);
    char *p;
    int len = strlen(arr);
    for(int i = len-1, j = 0; i>=0;i--, j++){
        p = &arr[i];
        arr2[j] = *p;

    }

    printf("%s\n", arr2);
}
