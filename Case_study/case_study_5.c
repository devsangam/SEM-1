#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        int test_case;
        scanf("%d",&test_case);
        if(test_case==1 || test_case==0) {
            printf("Isfibo");
            continue;
        }
        int fibbo1 = 1;
        int fibbo2 = 1;
        int isfibbo = 0;
        while (test_case>fibbo1 && test_case>fibbo2)
        {
            fibbo2 = fibbo2 + fibbo1;
            if(test_case==fibbo2) {
                    isfibbo = 1;
                    goto truth;
                }           
            fibbo1 = fibbo2 + fibbo1;
            if(test_case==fibbo1) {
                    isfibbo = 1;
                    goto truth;
                }           
            }   
        truth:
        if(isfibbo) {
            printf("IsFibbo\n");
        } else {
            printf("Isnotfibbo\n");
        }
        
    }
    

    return 0;
}