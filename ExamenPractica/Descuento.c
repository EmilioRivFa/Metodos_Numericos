#include <stdio.h>

int main() {
    float cantidad, descuento;
    int esCliente;

    // Solicitar al usuario la cantidad en pesos
    printf("Ingrese la cantidad en pesos: ");
    scanf("%f", &cantidad);

    // Solicitar al usuario si es cliente (1 para sí, 0 para no)
    printf("¿Es usted cliente? (1 para sí, 0 para no): ");
    scanf("%d", &esCliente);

    // Calcular el descuento usando el operador ternario
    descuento = esCliente ? cantidad * 0.2 : cantidad * 0.05;
    float total = cantidad - descuento;

    // Imprimir el resultado
    printf("\nCantidad ingresada: %.2f\n", cantidad);
    printf("Descuento aplicado: %.2f\n", descuento);
    printf("Total a pagar: %.2f\n", total);

    return 0;
}
