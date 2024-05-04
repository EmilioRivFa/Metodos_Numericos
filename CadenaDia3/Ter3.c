#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palabra[25];
    int contar[26] = {0}; 
    
    printf("Introduce una palabra: ");
    scanf("%s", palabra);
    
    for (int i = 0; palabra[i] != '\0'; i++) {
        char letra = tolower(palabra[i]); 
        if (letra >= 'a' && letra <= 'z') {
            contar[letra - 'a']++; 
        }
    }
    
    printf("Total de cada letra en la palabra:\n");
    for (int i = 0; i < 26; i++) {
        if (contar[i] > 0) {
            printf("%c -> %d\n", 'a' + i, contar[i]);
        }
    }
    
    return 0;
}

