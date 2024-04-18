#include <stdio.h>

int main (){
    int pri = 1;
    int seg = 3;
    int ter = 5;
    int cua = 30;
    int cin= 25;


    int res = pri / seg;
    int res2 = seg/ter;
    int res3 = pri/cua;

    int dos = cin / cua;
    int def = res + res2 +res3;
    int orig = def/dos;

    printf ("%d\n", orig);
    
    return 0;

}
