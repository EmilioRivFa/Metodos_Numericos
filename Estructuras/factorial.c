/* #include <stdio.h>
int potencia(int a, int b);
int main(void){
    int x,y;
    int max;
    x = max;
    y = max;
    printf("ingrese numerom\n");
    scanf("%d", &max);
    max = potencia(x,y);
    
    printf("La potencia es: %d ", max);
    
    return 0;
    }
    int potencia (int a, int b){
    if (b < 1)
    return 1;
    return a * potencia (a, b-1);
} */
#include <stdio.h>

int numero (int num);
int factorial (int num);

int main (void){
    int n, fac, num;
    n = numero(num);
    fac = factorial(n);
    printf("El factorial de %d es : %d", n, fac);
    printf("\n");
    return 0;
}

int factorial (int num){
    if (num == 0){
        return 1;
    }else{
        return num * factorial (num - 1);
    }
}

int numero (int num){
    puts("Ingrese un numero ...");
    scanf("%d", &num);
    return num;
}
