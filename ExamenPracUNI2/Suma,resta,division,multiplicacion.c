#include <stdio.h>
struct fraccion{
    int den;//abajo
    int num;//arriba

};
int multipli(struct fraccion multi1,struct fraccion multi2);
int suma(struct fraccion suma1, struct fraccion suma2);
int resta(struct fraccion resta1, struct fraccion resta2);
int division(struct fraccion divi1, struct fraccion divi2);
int main(void){
    struct fraccion frac1;
    struct fraccion frac2;
    frac1.den=3;//a
    frac1.num=5;//b
    frac2.den=6;//c
    frac2.num=7;//d
    multipli(frac1,frac2);
    suma(frac1,frac2);
    resta(frac1,frac2);
    division(frac1,frac2);
    /*res(frac1,frac2);
    div(frac1,frac2);*/
    return 0;
}
int multipli(struct fraccion multi1,struct fraccion multi2){//a/b c/d
    int den=multi1.den*multi2.den;
    int num=multi1.num*multi2.num;
    printf("%d/%d\n", den, num);

}

int suma(struct fraccion suma1, struct fraccion suma2){
    int num=(suma2.den*suma1.num)+(suma1.den+suma2.den);
    int den=(suma1.den*suma2.den);
    printf("%d/%d\n", num,den);
}

int resta(struct fraccion suma1, struct fraccion suma2){
    int num=(suma2.den*suma1.num)-(suma1.den+suma2.den);
    int den=(suma1.den*suma2.den);
    printf("%d/%d\n", num,den);
}

int division(struct fraccion divi1,struct fraccion divi2){//a/b c/d
    int den=divi1.num*divi2.den;
    int num=divi1.den*divi2.num;
    printf("%d/%d\n", den, num);

}
