#include <stdio.h>
#include <string.h>

int main() {
    int len;
    char cad[]="ES una cadena";
    len = strlen(cad);
    printf("La longitud de: \'%s\' es: %d\n", cad, len);
    return 0;
}