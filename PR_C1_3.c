/*
Una empresa de venta de recambios de automóviles necesita un
programa que calcule y muestre el precio final en euros de un
producto. Para ello, se debe aplicar la siguiente fórmula:

precio_neto = precio_coste * (100 + margen) /100))
El precio de coste en euros y el margen en tanto por ciento que
desea obtener la empresa para el producto se introducirán por
teclado.
*/

#include <stdio.h>

int main() {
    
    float precio_neto, precio_coste, margen;

    printf("Precio de coste ? ");
    scanf("%f",&precio_coste);

    printf("Margen ? ");
    scanf("%f",&margen);

    /* Calculo */

    precio_neto = precio_coste * (100+margen)/100;

    printf("El precio neto es de %f euros\n", precio_neto);

    return 0;
}