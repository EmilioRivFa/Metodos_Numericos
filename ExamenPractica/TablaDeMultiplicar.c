
/*EScribe en Lenguaje C, un programa que pida desde el
 teclado cualquier numero y imprima la Tabla de multiplicar 
 que recorra un ciclo de 0 al 100, lo imprima de manera 
 ansendente y desendente*/


#include <stdio.h>

int main() {
    int numero;
    
    printf("Ingrese un número para imprimir la tabla de multiplicar: ");
    scanf("%d", &numero);
    
    // Tabla de multiplicar ascendente
    printf("\nTabla de multiplicar ascendente del %d:\n", numero);
    int i = 0;
    while (i <= 1000) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }
    
    // Tabla de multiplicar descendente
    printf("\nTabla de multiplicar descendente del %d:\n", numero);
    i = 1000;
    while (i >= 0) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i--;
    }
    
    return 0;
}