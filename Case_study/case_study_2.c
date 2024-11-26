#include<stdio.h>
int main(void) {
    int N, M;
    scanf("%i%i", &N, &M);

    int jar[N];
    for (int i = 0; i < N; i++) {
        jar[i] = 0;
    }

    int operation[M][3];
    for (int i = 0; i < M; i++) {
        scanf("%i%i%i", &operation[i][0], &operation[i][1], &operation[i][2]);
    }

    for (int i = 0; i < M; i++) {
        int start = operation[i][0] - 1; 
        int end = operation[i][1];      
        int value = operation[i][2];

        for (int j = start; j < end; j++) {
            jar[j] += value;
        }
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += jar[i];
    }

    printf("%i\n", sum / N);

    return 0;
}
