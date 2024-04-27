#include <stdio.h>

int main(){
    int i;
    int j;

    for (i=0; i<5; i++){
        printf("para i; %d \t", i);
        for (j=0; j<3; j++){
            printf("j%d,", j);
        }
        printf("\n\n");
    }
    return 0;
}