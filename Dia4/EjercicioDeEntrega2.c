#include <stdio.h>

int main (){
    double a = 5.0;
    double b = 2.0;
    double c = 1.0;
    double d = 4.0;

    double res;
    double res1;
    double res2;
    double res3;

    res=(b-(c/d));
    res1=(c+(b/res));
    res2=(c/res1);
    res3=a+(b/res2);

    printf("el resultado es %f", res3);
    return 0; 
}