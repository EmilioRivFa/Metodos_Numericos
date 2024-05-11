#include <stdio.h>

void multiplicacion(int n, int multiplicar){
    if(multiplicar > 10)
    return;


    printf("%d * %d = %d\n", n, multiplicar, n * multiplicar);

    multiplicacion(n, multiplicar + 1);

}
int main() {
    int numero;
    for (numero = 1; numero <= 100; numero++ ){
        printf("Tabla del %d:\n", numero);
        multiplicacion(numero, 1);
        printf("\n");

    }

    return 0;
}