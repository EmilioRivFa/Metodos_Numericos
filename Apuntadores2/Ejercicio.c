#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int*arreglo;

    printf("INgrese Tamaño del arreglo: ");
    scanf("%d", &x);

    arreglo = (int *)malloc(x * sizeof(int));
    
    if(arreglo == NULL) exit(1);


    for (int i = 0; i < x; i++) {
        printf("numero%d: \n", i+1);
        scanf("%d", &arreglo[i]);
    }

    printf("Los valores son:\n");
    for (int i = 0; i < x; i++) {
        printf("%d ", arreglo[i]);
    }

    free(arreglo);

    return 0;
}
//Tarea medir los ciclos de reloj con los apuntadores y 
//sin los apuntadores, tendria que reducir mucho
   
//Tarea 2 Programar el sistema de interpoblacion de newton
