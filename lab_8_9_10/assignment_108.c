#include<stdio.h>
int length_of_str(char *str);
void str_rev(char* s1);
void str_cat(char *s1, char *s2, char *res);
int str_compare(char *s1, char* s2);
void str_cpy(char *s1, char* s2);
int main(){
    char s1[50];
    char s2[50];
    char s3[100];
    printf("enter string 1:");
    scanf("%s", &s1);
    printf("enter string 2:");
    scanf("%s", &s2);
    printf("length is %i\n",length_of_str(s1));
    if(str_compare(s1, s2 == 0)){
        printf("s1 and s2 are same\n");
    }
    else{
        printf("s1 and s2 are different\n");
    }
    str_cat(s1,s2,s3);
    printf("s1+s2 = %s\n", s3);
    str_rev(s1);
    printf("reversed s1 is: \n", s1);

}
int length_of_str(char *str){
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}

void str_cat(char *s1, char *s2, char *res){
    int len_1 = length_of_str(s1);
    int len_2 =length_of_str(s2);
    for( int  i = 0; i<len_1;i++){
        res[i]= s1[i];
    }
    for( int  i = 0; i<=len_2;i++){//i=len_2 copies'\0'
        res[i+len_1]= s2[i];
    }
}
void str_rev(char* s1){
    int len = length_of_str(s1);
    char temp;
    for(int i = 0, j = len-1;i<len/2;i++,j--){
        temp = s1[i];
        s1[i]=s1[j];
        s1[j] = temp;
    }
}
int str_compare(char *s1, char* s2){
    int diff = 0, i = 0;
    while((s1[i]!='\0') && (s2[i]!=0)){
        diff = s1[i]-s2[i];
        if(diff!=0){
            return diff;
        }
    }
    return diff; 
}
void str_cpy(char *s1, char* s2){
    const int n = length_of_str(s1);
    for(int i = 0; i<=n;i++){//i=n to copy '\0'
        s2[i] = s2[i];
    }
}
