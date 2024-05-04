#include <stdio.h>
#include <string.h>

int main() {
    char palabra[15];
    int len;

   printf("INgrese una palabra ");
   scanf("%s", palabra);

   len = strlen(palabra);
   printf("La longitud de la palabra es: %d\n ", len);

}