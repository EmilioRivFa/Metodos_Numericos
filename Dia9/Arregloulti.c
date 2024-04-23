#include <stdio.h>
int main() {
    int arreglo[20];
    int i = 0;
    while (i < 20) {
        arreglo[i] = i + 1;
        i++;
    }
    int suma = 0;
    i = 0;
    while (i < 20) {
        suma += arreglo[i];
        i++;
    }
    float promedio = suma / 20.0;
    long multiplicacion = 1;
    i = 0;
    while (i < 20) {
        multiplicacion *= arreglo[i];
        i++;
    }
    printf("Elementos del arreglo:\n");
    i = 0;
    while (i < 20) {
        printf("%d ", arreglo[i]);
        i++;
    }
    printf("\n"); 
    printf("El promedio de los elementos es: %.2f\n", promedio);
    printf("La multiplicacion de los elementos es: %ld\n", multiplicacion);

    return 0;
}
