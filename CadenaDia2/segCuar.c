#include <stdio.h>
#include <string.h>

int main() {
    int i;
    int len;
    char palabra1 [30];
    char palabra2[30];
    
    printf("Ingrese la primera palabra: \n");
    scanf ("%s", palabra1);
    printf ("Ingrese la segunda palabra: \n");
    scanf ("%s" , palabra2);

    int longitud = strlen (palabra1);


    for (int i = 0; i < longitud; ++i) {
    strcat (palabra1, palabra2);
    }
    printf ("Palabra 1 es: %s\n", palabra1);
    return 0;

    
}
