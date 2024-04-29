#include <stdio.h>

int main() {
    int longitudSerie = 50;
    int i;

    for ( i=1; i<=(longitudSerie/2); i++){
        printf("%d ", 2*i);
        printf("%d, ", 3*i);
    }
    
}