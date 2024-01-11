#include <stdio.h>

/*
Maquia expendedora calcula menor numero de monedas a devolver en  un cambio
*/

int main()
{
    float euros_a_devolver, falta_por_devolver;
    int monedas_2e, monedas_1e, monedas_50c, monedas_20c, monedas_10c, monedas_5c, monedas_1c;

    //Cambio a devolver
    printf("Que cambio debe devolver :");
    scanf("%f",&euros_a_devolver);

    //calculo monedas de cada tipo
    falta_por_devolver = euros_a_devolver;

    monedas_2e = falta_por_devolver/2;
    falta_por_devolver = falta_por_devolver - 2*monedas_2e;

    monedas_1e = falta_por_devolver/1;
    falta_por_devolver = falta_por_devolver - 1*monedas_1e;

    monedas_50c = falta_por_devolver/0.5;
    falta_por_devolver = falta_por_devolver - 0.5*monedas_50c;

    monedas_20c = falta_por_devolver/0.2;
    falta_por_devolver = falta_por_devolver - 0.2*monedas_20c;

    monedas_10c = falta_por_devolver/0.1;
    falta_por_devolver = falta_por_devolver - 0.1*monedas_10c;

    monedas_5c = falta_por_devolver/0.05;
    falta_por_devolver = falta_por_devolver - 0.05*monedas_5c;

    monedas_1c = falta_por_devolver/0.01;
    falta_por_devolver = falta_por_devolver - 0.01*monedas_1c;

    printf("Monedas a devolver:\n");
    printf("Monedas de 2€ = %d\n", monedas_2e);
    printf("Monedas de 1€ = %d\n", monedas_1e);
    printf("Monedas de 50c = %d\n", monedas_50c);
    printf("Monedas de 20c = %d\n", monedas_20c);
    printf("Monedas de 10c = %d\n", monedas_10c);
    printf("Monedas de 5c = %d\n", monedas_5c);
    printf("Monedas de 1c = %d\n", monedas_1c);


    return 0;
}

