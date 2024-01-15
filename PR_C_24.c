/*
    Escribir un programa que resuelva sistemas de ecuaciones del
    siguiente tipo:
    ax+by=c
    a'x+b'y=c'
*/
#include <stdio.h>

main()
{
    float a,b,c,a2,b2,c2,x,y;

    printf("Introduzca los operandos de las ecuciones\n");
    printf("=========================================\n");
    printf("\n");
    printf("ECUACION 1: ax+by=c\n ");
    printf("a ? ");
    scanf("%f",&a);
    printf("b ? ");
    scanf("%f",&b);
    printf("c ? ");
    scanf("%f",&c);
    printf("ECUACION 2: a\'x+b\'y=c\'\n ");
     printf("a2 ? ");
    scanf("%f",&a2);
    printf("b2 ? ");
    scanf("%f",&b2);
    printf("c2 ? ");
    scanf("%f",&c2);

    y = (a2*c-a*c2)/(a2*b-a*b2);
    x = (c - b*y) / a;

    printf("Resultado:\n");
    printf("X = %f\n",x);
    printf("Y = %f\n",y);

    return 1;


}