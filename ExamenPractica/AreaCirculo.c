#include <stdio.h>
#define PI 3.14159

int main() {
    float radio1, radio2, radio3;
    float area1, area2, area3;

    // Solicitar al usuario los radios de los círculos
    printf("Ingrese el radio del primer círculo: ");
    scanf("%f", &radio1);

    printf("Ingrese el radio del segundo círculo: ");
    scanf("%f", &radio2);

    printf("Ingrese el radio del tercer círculo: ");
    scanf("%f", &radio3);

    // Calcular el área de los círculos
    area1 = PI * radio1 * radio1;
    area2 = PI * radio2 * radio2;
    area3 = PI * radio3 * radio3;

    // Imprimir el resultado
    printf("\nEl área del primer círculo con radio %.2f es %.2f\n", radio1, area1);
    printf("El área del segundo círculo con radio %.2f es %.2f\n", radio2, area2);
    printf("El área del tercer círculo con radio %.2f es %.2f\n", radio3, area3);

    return 0;
}
