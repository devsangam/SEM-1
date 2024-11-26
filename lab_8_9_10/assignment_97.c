#include<stdio.h>
#include<string.h>
int main(void){
    char arr[100], *p;
    int vowel = 0;
    fgets(arr, 100, stdin);
    int i =0;
    p = &arr[0];
    while(*p != '\n'){
        if(arr[i]>='A'&&arr[i]<='Z'){
            arr[i]=arr[i]+('a'-'A');
        }
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'){
            vowel++;
        }
        p++;
        i++;
    }
    printf("number of vowels is:\t%i\n", vowel);
    }