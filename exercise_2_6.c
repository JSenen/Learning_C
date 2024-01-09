#include <stdio.h>

/*
Escribe la definición de una estructura que almacene una tabla de 10 enteros, una cadena de 20 letras, un número real de precisión simple y uno de precisión doble. A continuación, en una línea separada, declara dos variables de este tipo.
*/

//Definicion
struct datos_almacenados
{
    int tabla[10];
    char cadena[20];
    int numero_real;
    double numero_doble;

};

int main()
{
    //declaracion
    struct datos_almacenados datos_ejemplo;
    
    datos_ejemplo.numero_real = 1;
    datos_ejemplo.numero_doble = 1.23;
    datos_ejemplo.cadena[1] = "Prueba";
    datos_ejemplo.tabla[0] = "Tabla";

    printf("Datos ejemplo numero real %d \n", datos_ejemplo.numero_real);
    printf("Datos ejemplo numero doble %f \n", datos_ejemplo.numero_doble);
    printf("Datos ejemplo cadena %s \n", datos_ejemplo.cadena[1]);
   

    return 0;
}