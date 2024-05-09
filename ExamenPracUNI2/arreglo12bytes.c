#include <stdio.h>

int main() {
    // Definimos un arreglo de 12 bytes
    unsigned char arreglo[12] = {0}; // Inicializado en 0
    
    // Inicializamos un puntero al inicio del arreglo
    unsigned char *puntero = &arreglo[0];
    
    // Imprimimos la representación visual de la memoria
    printf("Representación visual de la memoria (12 bytes):\n");
    printf("Dirección   |   Contenido\n");
    printf("-------------------------\n");
    for (int i = 0; i < 12; i++) {
        printf("%p   |   %02X\n", (void *)puntero, *puntero); // Imprime la dirección de memoria y el contenido del byte
        puntero++; // Avanzamos el puntero al siguiente byte
    }
    
    return 0;
}
