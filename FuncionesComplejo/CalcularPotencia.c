#include <stdio.h>
#include <math.h>
#include <string.h>
int potencia (int a, int b);
int main(void){
    int x, y;
    int max;
    x=2;
    y=3;

    max = potencia(x,y);
    printf("La pottencia es: %d", max);
    return 0;


}
int potencia (int a, int b){
    if (b < 1)
    return a * potencia (a,b-1);
}