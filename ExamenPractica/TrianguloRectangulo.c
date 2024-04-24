#include <stdio.h>

int main() {
    float lado1, lado2, lado3;
    
    // Solicitar al usuario los lados del triángulo
    printf("Ingrese la longitud del lado 1 del triángulo: ");
    scanf("%f", &lado1);

    printf("Ingrese la longitud del lado 2 del triángulo: ");
    scanf("%f", &lado2);

    printf("Ingrese la longitud del lado 3 del triángulo: ");
    scanf("%f", &lado3);
    
    // Verificar si cumple con la condición de ser un triángulo rectángulo
    if (lado1*lado1 == lado2*lado2 + lado3*lado3 || lado2*lado2 == lado1*lado1 + lado3*lado3 || lado3*lado3 == lado1*lado1 + lado2*lado2) {
        printf("\nEl triángulo es un triángulo rectángulo.\n");
    } else {
        printf("\nEl triángulo no es un triángulo rectángulo.\n");
    }
    
    return 0;
}
