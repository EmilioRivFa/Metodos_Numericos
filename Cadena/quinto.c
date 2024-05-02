#include <stdio.h>
#include <string.h>



int main() {
    char palabra1[100], palabra2[100];
    int longitud_palabra1;

    // Pedir al usuario que ingrese las dos palabras
    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra1);

    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);

    // Calcular la longitud de la primera palabra
    longitud_palabra1 = strlen(palabra1);

    // Concatenar la segunda palabra a la primera palabra N veces
    for (int i = 0; i < longitud_palabra1; i++) {
        strcat(palabra1, palabra2);
    }

    // Mostrar la palabra resultante
    printf("\nPalabra resultante: %s\n", palabra1);

    return 0;
    
}
