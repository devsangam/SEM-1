#include<stdio.h>
int main(void) {
    int T, n, div;
    scanf("%i", &T);

    int nums[T];
    int divs[T];

    for (int i = 0; i < T; i++) {
        scanf("%i", &nums[i]);
    }

    for (int i = 0; i < T; i++) {
        n = nums[i];
        div = 0;
        while(n>0){
            if(nums[i]%(n%10) == 0){
                div +=1;
            }
            n=n/10;
        }
        divs[i] = div;
    }
    for (int i = 0; i < T; i++) {
        printf("%i\n", divs[i]);
    }
}
