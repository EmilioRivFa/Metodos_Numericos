/*Imprimir todos los numeros que son divisibles 
entre 2 y entre 7, mayor a 0 y menores a mil */

#include<stdio.h>

int main (){
    int numero=1;
    
    while(numero<1000){
        float numero2 = numero%2;
        float numero7 = numero%7;
        if(numero2 == 0 && numero7 == 0){
            printf("%d ", numero);
        }
    numero++;
    }
    return 0;

    
        
    }


    
