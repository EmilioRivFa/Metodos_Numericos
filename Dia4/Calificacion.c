#include <stdio.h>
int main (){
    int calif;
    puts("Introduce tu calificacion");
    scanf ("%d", &calif);
    if(calif>=70){
        printf("Felicidades Aprobaste el curso");
    }if(calif<=69){
        printf("Lo siento No aprobaste");

    }
}