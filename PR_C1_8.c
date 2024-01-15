/*
    Una compañía de refrescos comercializa tres productos: de cola,
    de naranja y de limón. Se desea realizar un programa que calcule
    las ventas realizadas de cada producto. Para ello, se leerá la
    cantidad vendida (máximo 5000000) y el precio en euros de cada
    producto y se mostrará un informe de ventas
*/

#include <stdio.h>

int main()
{
    long int coke_sale, orange_sale, lemon_sale;
    float coke_price, orange_price, lemon_price;
    float coke_total, orange_total, lemon_total;

    printf("INSERT HOW MANY SALES AND UNIT PRICE OF EACH GOOD\n");
    printf("Coke ? ");
    scanf("%ld",&coke_sale);
    printf("Price unit coke? ");
    scanf("%f",&coke_price);
    printf("Orange ? ");
    scanf("%ld",&orange_sale);
    printf("Price unit orange? ");
    scanf("%f",&orange_price );
    printf("Lemon ? ");
    scanf("%ld",&lemon_sale);
    printf("Price unit lemon? ");
    scanf("%f",&lemon_price);

    coke_total = coke_sale * coke_price;
    orange_total = orange_sale * orange_price;
    lemon_total = lemon_sale * lemon_price;

    printf("   Producto    Ventas     Precio      TOTAL   \n");
    printf("----------------------------------------------\n");
    printf("    Coke         %ld        %f          %f\n",coke_sale,coke_price,coke_total);
    printf("    Orange       %ld        %f          %f\n",orange_sale,orange_price,orange_total);
    printf("    Lemon        %ld        %f          %f\n",lemon_sale,lemon_price,lemon_total);
    printf("-----------------------------------------------");

    return 1;



}