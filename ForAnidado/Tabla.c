#include <stdio.h>

int main() {
    int M, N;

    printf("INgrese el numero d filas (M): ");
    scanf("%d", &M);
    printf("INgrese el numero de columnas (N): ");
    scanf("%d", &N);

    for (int i = 1; i <=M; i++){
        for (int j = 1; j <=N;++j){
            printf("%d\t", i*j);

        }
        printf("\n");
    }
    return 0;

}