/*Imprimir todos los numeros divisibles 
entre 3 mayores a 0 y menores a mil.*/

#include <stdio.h>

int main (){
    int numero = 1;
    while(numero<1000){
        float numero2 = numero%3;
        if(numero2 == 0){
            printf("%d ", numero);
        }
        numero++;
    }
    return 0;
}