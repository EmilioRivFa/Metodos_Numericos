#include <stdio.h>
#include <string.h>

int main() {
    char palabra[20];
    char palabra2[20];
    char len[50];


    printf("Ingrese una palabra: \n");
    scanf("%s", palabra);

    printf("Ingrese la segunda palabra: \n");
    scanf("%s ", palabra2);

    printf("---antes---\n");
    printf("palabra: %s\n" , palabra);
    printf("palabra2: %s\n" , palabra2);

    strcpy(len, palabra);
    strcpy(palabra, palabra2);
    strcpy(palabra2, len);

    printf("--despues---\n");
    
    printf("palabra: %s\n" , palabra);
    printf("palabra2: %s\n" , palabra2);


   

    return 0;

}