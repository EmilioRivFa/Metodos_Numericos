/*Escribe unprograma que resiva un numero N 
del usuario y haga la suma de todos los numeros 
desde 1 hasta N.*/

#include <stdio.h>

int main() {
    int numero;
    int suma = 0;
    int i;
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    for ( i=1; i<=(numero); i++){
        printf("%d ", i);
        suma += i;
        
    
    }
    printf("= %d ", suma);
}