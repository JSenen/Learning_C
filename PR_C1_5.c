#include <stdio.h>
#include <math.h>

/*
Calcular hipotenusa, perimetro y area triangulo introduciendo catetos
*/
int main()
{
    float cateto1, cateto2, hipotenusa, area, perimetro;

    //introduccion de datos
    printf("Introduce valor cateto 1: ");
    scanf("%f",&cateto1);
    printf("Introduce valor cateto 2: ");
    scanf("%f",&cateto2);

    //Calculo hiportenusa
    hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
    //Calculo area
    area = (cateto1*cateto2)/2;
    //Calculo perimetro
    perimetro = hipotenusa + cateto1 + cateto2;

    //Mostrar resultado
    printf("Hipotenusa = %f\n", hipotenusa);
    printf("Area = %f\n",area);
    printf("Perimetro = %f\n",perimetro);

    return 0;
}