#include <stdio.h>
#include <string.h>


struct empleado {
    char nombre[50];
    char sexo;
    float sueldo;
};

int main() {
    struct empleado empleados[5];
    int i;
    float menor_sueldo;
    int indice_menor_sueldo = 0;

    for (i = 0; i < 5; i++) {
        printf("Ingrese el nombre del empleado %d: ", i + 1);
        scanf("%s", empleados[i].nombre);
        
        printf("Ingrese el sexo del empleado %d (M/F): ", i + 1);
        scanf(" %c", &empleados[i].sexo);
        
        printf("Ingrese el sueldo del empleado %d: ", i + 1);
        scanf("%f", &empleados[i].sueldo);
        
        printf("\n");
    }

    menor_sueldo = empleados[0].sueldo;

    for (i = 1; i < 5; i++) {
        if (empleados[i].sueldo < menor_sueldo) {
            menor_sueldo = empleados[i].sueldo;
            indice_menor_sueldo = i;
        }
    }

    printf("El empleado con el menor sueldo es:\n");
    printf("Nombre: %s\n", empleados[indice_menor_sueldo].nombre);
    printf("Sexo: %c\n", empleados[indice_menor_sueldo].sexo);
    printf("Sueldo: %.2f\n", empleados[indice_menor_sueldo].sueldo);

    return 0;
}