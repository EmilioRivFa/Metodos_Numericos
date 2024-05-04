#include <stdio.h>
#include <string.h>


struct atleta {
    char nombre[50];//nombre
    char deporte[50];//deporte
    float medallas;//sueldo
    char pais[50];//pais
};

int main() {
    struct atleta atletas[5];
    int i;
    float menor_medalla;
    int indice_menor_medalla = 0;

    for (i = 0; i < 5; i++) {
        printf("Ingrese el nombre del Atleta %d: ", i + 1);
        scanf("%s", atletas[i].nombre);
        
        printf("Ingrese el deporte %d: ", i + 1);
        scanf("%s", atletas[i].deporte);
        
        printf("Ingrese medallas Totales %d: ", i + 1);
        scanf("%f", &atletas[i].medallas);

        printf("Ingrese pais %d: ", i + 1);
        scanf("%s", atletas[i].pais);
        printf("\n");
    }

    menor_medalla = atletas[0].medallas;

    for (i = 1; i < 5; i++) {
        if (atletas[i].medallas > menor_medalla) {
            menor_medalla = atletas[i].medallas;
            indice_menor_medalla = i;
        }
    }

    printf("El Deportista con mayor medallas es:\n");
    printf("Nombre: %s\n", atletas[indice_menor_medalla].nombre);
    printf("Deporte: %s\n", atletas[indice_menor_medalla].deporte);
    printf("Medallas: %.2f\n", atletas[indice_menor_medalla].medallas);
    printf("Pais: %s\n", atletas[indice_menor_medalla].pais);

    return 0;
}