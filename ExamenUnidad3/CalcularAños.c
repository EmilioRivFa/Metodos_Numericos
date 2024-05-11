#include <stdio.h>
#include <time.h>

void calcularEdad(int *anio, int *mes, int *dia, int *edad_anio, int *edad_mes, int *edad_dia) {
    time_t tiempo_actual = time(NULL);
    struct tm *tiempo_descompuesto = localtime(&tiempo_actual);
    

    
    int anio_actual = tiempo_descompuesto->tm_year + 1900;
    int mes_actual = tiempo_descompuesto->tm_mon + 1;
    int dia_actual = tiempo_descompuesto->tm_mday;
    
    *edad_anio = anio_actual - *anio;
    *edad_mes = mes_actual - *mes;
    *edad_dia = dia_actual - *dia;
   
    if (*edad_mes < 0) {
        *edad_anio -= 1;
        *edad_mes += 12;
    }
    if (*edad_dia < 0) {
        *edad_mes -= 1;
        *edad_dia += 30; 
    }
}



int main() {

    int anio_nacimiento, mes_nacimiento, dia_nacimiento;
    printf("Ingrese la fecha de nacimiento (año, mes, día): ");
    scanf("%d %d %d", &anio_nacimiento, &mes_nacimiento, &dia_nacimiento);
    
    int edad_anio, edad_mes, edad_dia;
    clock_t inicio = clock();
    calcularEdad(&anio_nacimiento, &mes_nacimiento, &dia_nacimiento, &edad_anio, &edad_mes, &edad_dia);
    clock_t fin = clock();
    
    double tiempo_transcurrido = ((double)(fin - inicio)) / CLOCKS_PER_SEC;

    printf("Edad: %d años, %d meses, %d días\n", edad_anio, edad_mes, edad_dia);
    printf("Tiempo de ejecución: %.6f segundos\n", tiempo_transcurrido);
    
    return 0;
}
