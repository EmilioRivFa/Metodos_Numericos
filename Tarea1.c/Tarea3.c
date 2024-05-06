#include <stdio.h>
#include <string.h>

void palInverso(char palabra[10], char resultado[10]);

int main(){
    char palabra [10];
    char res [10];
    
    printf("INgrese una palabra");
    printf("\n");

    scanf("%s", palabra);
    palInverso(palabra, res);
    
    printf("---Invertida-- %s", res);
    printf("\n");
    return 0;
}


void palInverso (char palabra[10], char resultado[10]){
    int longitud = strlen(palabra);
    for(int i = longitud-1; i>= 0; i--){
        resultado [i]=palabra[longitud-1-i];
    }
}
