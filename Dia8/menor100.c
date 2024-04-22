/*Escribir todos los enteros positivos menores que 100
omitiendo aquellos que son divisibles por 7*/
#include <stdio.h>

int main (){
    int numero = 1;
    while (numero<100){
        float numero7 = numero%7;
        if(numero < 100 && numero%7){
            printf("%d ", numero);
        }
        numero++;
    }
    return 0;
}