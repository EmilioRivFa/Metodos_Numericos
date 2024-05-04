#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[20], palabra2[20];
    
    printf("Escribe la primer palabra: ");
    scanf("%s", palabra1);
    
    printf("Escribe otra palabra: ");
    scanf("%s", palabra2);
    
    int comparacion = strcmp(palabra1, palabra2);
    
    if (comparacion == 0) {
        printf("Las 2 palabras son iguales.\n");
    } else if (comparacion < 0) {
        printf("%s es menor que %s.\n", palabra1, palabra2);
    } else {
        printf("%s es mayor que %s.\n", palabra1, palabra2);
    }
    
    return 0;
}
