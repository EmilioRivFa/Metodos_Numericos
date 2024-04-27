#include <stdio.h>

int main() {
    int N;
    int k;
    int i;
    printf("Ingrese un numero: ");
    scanf("%d", &N);

    printf("Mayor a menor:\n");
    for (i = N; i >= 1; --i) {
        for (k = 0; k < i; ++k) {
            printf("*");
        }
        printf("\n");
    }
    printf("\nMenor a mayor:\n");
    for (i = 0; i <= N; ++i){
        for (k = 0; k < i; ++k){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}