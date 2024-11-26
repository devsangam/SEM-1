#include<stdio.h>
#include<math.h>
int flip(int num, int n );
int main(){
    int n, number;
    printf("enter number:");
    scanf("%i", &number);
    printf("enter value of n:");
    scanf("%i", &n);
    int reversed = flip(number, n);
    printf("%i\n",reversed);

}
int flip(int num, int n ){
    int div = 1;
    for (int i = 0; i<n;i++){
        div = div * 10;
    }
    int first_n_digit = num/div, temp=0, no = (num)%div, rev_num = 0;
    while(no !=0){
        temp = no%10;
        rev_num = 10*rev_num + temp;
        no/=10;
    }
    return (first_n_digit*div)+rev_num;
}
