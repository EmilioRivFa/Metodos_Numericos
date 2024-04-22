#include <stdio.h>

int main (){
    int vector[10];
    int i = 0;
    int val = 9;
    while (i<10){
        vector[i]= val;
        //printf("El valor del vector [%d]", i, val);
        i++;
    }
    i = 0;
    while (i<10){
        printf("El vector [%d] = %d\n", i, vector[i]);
        i++;
    }
    
    

}