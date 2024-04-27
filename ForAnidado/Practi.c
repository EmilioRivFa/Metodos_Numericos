#include <stdio.h>

int main() {
    int N;

    printf("Ingrese el numero de pisos para la escalera: ");
    scanf("%d", &N);

    printf("Escalera de mayor a menor:\n");
    for (int i = N; i >= 1; --i) {
        for (int k = 0; k < i; ++k) {
            printf("*");
        }
        printf("\n");
    }
    printf("\nEscalera de meno a mayor:\n");
    for (int i = 1; i <= N; ++i){
        for (int k = 0; k < i; ++k){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}