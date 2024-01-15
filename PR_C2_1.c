/*
    Escribir un programa que, dados los lados de un triángulo a, b y c,
    indique si es equilátero (tres lados iguales), isósceles (sólo dos
    lados iguales) o escaleno (tres lados distintos) y que calcule su
    área mediante la fórmula de Herón

    A^2 = p(p-a)(p-b)(p-c) donde p = a+b+c / 2

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float lado_a, lado_b, lado_c, p, area_cuadrado, area;

    printf("Introduzca valor de los lados: ");
    scanf("%f%f%f",&lado_a,&lado_b,&lado_c);
    /*
    Comprobamos tipo de triangulo
    */
   if (lado_a == lado_b){
    if (lado_b == lado_c){
        printf("Triangulo equilatero\n");
    }else{
        printf("Triangulo Isosceles\n");
    }
   }else{
    if (lado_a == lado_c || lado_b == lado_c)
    {
        printf("Triangulo Isosceles\n");
    } else {
        printf("Triangulo Escaleno\n");
    }
    
   }

   /* Calculo del area */
   p = (lado_a+lado_b+lado_c)/2;
   area_cuadrado = p*(p-lado_a)*(p-lado_b)*(p-lado_c);
   area = sqrt(area_cuadrado);

   printf("El area del triangulo es %f\n", area);

   return 1;
}