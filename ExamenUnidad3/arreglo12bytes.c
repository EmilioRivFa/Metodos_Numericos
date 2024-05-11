#include <stdio.h>

int main() {
    char arreglo[12] = {0,1,2,3,4,5,6,7,8,9,10,11}; 
    char *pun = &arreglo[0];
    
    
    printf("Representación (12 bytes):\n");


    printf("Dirección.........Contenido\n");
    printf("\n");
    for (int i = 0; i < 12; i++) {
        printf("%p   |   %02X\n", (void *)pun, *pun); 
        pun++;
        
        
    }
    
    return 0;
}
