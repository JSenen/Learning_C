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
    // Declaracion
    struct datos_almacenados datos_ejemplo;

    datos_ejemplo.numero_real = 1;
    datos_ejemplo.numero_doble = 1.23;

    // Corregir la asignación de la cadena
    snprintf(datos_ejemplo.cadena, sizeof(datos_ejemplo.cadena), "%s", "Prueba");

    // Corregir la asignación de la tabla
    datos_ejemplo.tabla[0] = 42;  // Asignar un valor entero a la tabla

    printf("Datos ejemplo numero real %f \n", datos_ejemplo.numero_real);  // Cambiado a %f para coincidir con el tipo de dato
    printf("Datos ejemplo numero doble %lf \n", datos_ejemplo.numero_doble);  // Cambiado a %lf para coincidir con el tipo de dato
    printf("Datos ejemplo cadena %s \n", datos_ejemplo.cadena);
    printf("Datos ejemplo tabla[0] %d \n", datos_ejemplo.tabla[0]);

    return 0;
}