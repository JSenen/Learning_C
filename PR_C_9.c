/*
Escribir un programa que muestra el resultado de la ecuación de
tercer grado y = ax^3 + bx^2 + cx +d para un valor de x. Para ello,
debe leer el valor de los coeficientes (a, b, c y d) y el valor de x y
mostrar por pantalla el resultado de la evaluación de la ecuación
resultante.
*/

#include <stdio.h>

main()
{
    float a,b,c,d,x,y;

    printf("Resolucion del polinomio y = ax^3 + bx^2 + cx +d \n");
    printf("Introduzca los valores:\n");
    printf("a ? ");
    scanf("%f",&a);
    printf("b ? ");
    scanf("%f",&b);
    printf("c ? ");
    scanf("%f",&c);
    printf("d ? ");
    scanf("%f",&d);
    printf("x ? ");
    scanf("%f",&x);

    y = a*(x*x*x) + b*(x*x) + c*x + d;

    printf("El resultado de y = %f",y);

    return 1;
    }