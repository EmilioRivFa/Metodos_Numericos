#include <stdio.h>

void tablaMultiplicar(int n, int multiplicador) {
    if (multiplicador > 10)
        return;

    printf("%d x %d = %d\n", n, multiplicador, n * multiplicador);


    tablaMultiplicar(n, multiplicador + 1);
}

int main() {
    int numero;
    for (numero = 1; numero <= 100; numero++) {
        printf("Tabla de multiplicar del %d:\n", numero);
        tablaMultiplicar(numero, 1); 
        printf("\n");
    }
    return 0;
}
