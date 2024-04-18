#include <stdio.h>
#include<stdint.h>

int main (void){
    int16_t i = 1;
    int8_t *p = (int8_t *) &i;

    if (p[0] == 1) printf("little endian\n");
    else printf("Big endian\n");
    }