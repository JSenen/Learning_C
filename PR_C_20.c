/*
programa que lea los valores de tres resistencias
eléctricas (en Ohmios, W) y muestre en pantalla el valor global
de la resistencia formada por estas tres resistencias si
Paralelo => R = 1 / (1/r1) + (1/r2) + (1/r3)
Serie => R = r1 +r2 +r3
*/

#include <stdio.h>

int main()
{
    float r1,r2,r3,r_paralelo,r_serie;

    printf("Introduzca el valor de las resistencias: \n");
    
    printf("R1 ? ");
    scanf("%f",&r1);
    printf("R2 ? ");
    scanf("%f",&r2);
    printf("R3 ? ");
    scanf("%f",&r3);

    r_paralelo = 1 / ((1/r1) + (1/r2) + (1/r3));
    r_serie = r1 + r2 + r3;

    printf("\n");
    printf("RESISTENCIAS EN SERIE = %f Ohmnios\n",r_serie);
    printf("RESISTENCIAS EN PARALELO = %f Ohmnios\n",r_paralelo);

    return 1;


}