#include <stdio.h>

int main (){
    int miArreglo[] = {3, 5, 6, 8, 4, 7, 8, 5, 3, 1};
    int arre2[] = {3, 4, 6, 8, 9, 1, 2, 3, 0, 9};

    printf("%d\n", miArreglo[3] % (arre2[2]/2));
    printf("%d\n", arre2[miArreglo[1]] - miArreglo[9]);
    printf("%d\n", miArreglo[0] + miArreglo[1+2]);
    printf("%d\n", miArreglo[5]+arre2[5]);
    printf("%d\n", miArreglo[3]/arre2[2])/2;
    return 0;
}

