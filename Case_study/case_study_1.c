#include<stdio.h>
#include<string.h>
int main(void){
    int t, len;
    scanf("%i", &t);
    char w[t][100];
    for(int i=0;i<t;i++){
        scanf("%s", w[i]);
    }

    int small, small_i, flag;
    char temp;
    for(int i=0;i<t;i++){
        len = strlen(w[i]) - 1;
        flag = 1;
        for(int j = len-1; j>=0; j--){
            small = 'z'+1;
            for(int k = j+1;k<=len;k++ ){
                if(w[i][j]<w[i][k]){
                    if(w[i][k]<small){
                        small = w[i][k];
                        small_i = k;
                    }
                }
            }
            if(small<='z'){
                temp = w[i][j];
                w[i][j] = w[i][small_i];
                w[i][small_i] = temp;
                printf("%s", w[i]);
                for (int l = j; i < len - 1; l++) {
                    for (int m = 0; m < len - 1 - l; m++) {
                        if (w[i][m] > w[i][m + 1]) {
                            int temp = w[i][m];
                            w[i][m] = w[i][m + 1];
                            w[i][m + 1] = temp;
                        }
                    }
                }
                flag = 0;
                break;
            }



        }
        if(flag){
            printf("no answer");
        }
        printf("\n");
    }
    

}