#include <stdio.h>
#include <string.h>

int main() {
    char palabra[25];
    int longitud, i, esPalindromo = 1;

    printf("Introduce una palabra: ");
    scanf("%s", palabra);

    longitud = strlen(palabra);

    for (i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - i - 1]) {
            esPalindromo = 0;
            break;
        }
    }

    if (esPalindromo) {
        printf("%s es un palindromo.\n", palabra);
    } else {
        printf("%s no es un palindromo.\n", palabra);
    }

    return 0;
}
