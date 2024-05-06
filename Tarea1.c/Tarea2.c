#include <stdio.h>
#include <math.h>

float area ( float a, float b, float c);

int main (){
    float aTriangulo, a, b, c;
    aTriangulo = area(a,b,c);
    printf("El area es: %f", aTriangulo);
    printf("\n");


}
float area (float a, float b, float c){
    float p, area;
    puts("Ingrese lado 1");
    scanf("%f", &a);
    puts("Ingrese lado 2");
    scanf("%f", &b);
    puts("Ingrese lado 3");
    scanf("%f", &c);

    p = a + b+ c / 2;
    area = sqrt (p *(p-a) *(p-b)* (p-c));
    return area;
}