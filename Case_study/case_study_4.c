#include<stdio.h>
#include<string.h>
int main(void){
    int N, len;
    scanf("%i", &N);
    char element[N][100];
    for(int i=0;i<N;i++){
        scanf("%s", element[i]);
    }

    len = strlen(element[0]);
    char set[len + 1];
    int flag, index = 0;
    for(int i=0;i<len;i++){
        flag = 1;
        for(int j = index;j>=0;j--){
            if(set[j]==element[0][i]){
                flag = 0;
                break;
            }
        }
        if(flag){
            set[index] = element[0][i];
            index++;
        }
    }
    set[index] = '\0';
    int gem_f = 1, gem = 0;

    for(int i=0;i<len;i++){

        for(int j = 0;j<N;j++){
           if(!strchr(element[i], set[i])){
            gem_f = 0;
            break;
           }
        }
        if(gem_f){
            gem+=1;
        }
    }
    printf("%i", gem);
}