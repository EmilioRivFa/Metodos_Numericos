#include <stdio.h>
#include <string.h>

//#define MAX_LENGTH 100

int main() {
 //   char palabra_1[MAX_LENGTH], palabra_2[MAX_LENGTH], temp[MAX_LENGTH];
    char palabra_1[100];
    char palabra_2[100];
    char temp[100];
    // Pedir al usuario que ingrese las dos palabras
    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra_1);

    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra_2);

    // Mostrar las palabras antes del intercambio
    printf("\nAntes del intercambio:\n");
    printf("Palabra_1 = '%s'\n", palabra_1);
    printf("Palabra_2 = '%s'\n", palabra_2);

    // Intercambiar el contenido de los arreglos
    strcpy(temp, palabra_1);
    strcpy(palabra_1, palabra_2);
    strcpy(palabra_2, temp);

    // Mostrar las palabras después del intercambio
    printf("\nDespués del intercambio:\n");
    printf("Palabra_1 = '%s'\n", palabra_1);
    printf("Palabra_2 = '%s'\n", palabra_2);

    return 0;
    
    
}
