#include <stdio.h>

int main (){
    int numero = 1;
    while (numero<=500){
        printf ("%d, %d, %d, %d\n", numero, numero*numero, numero*numero*numero, numero*numero*numero*numero);
        numero++;
    }
    return 0;
    
}
