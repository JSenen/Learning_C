/* Prototipo */
int addition(int, int);

/* funcion principal*/
int main()
{
    int i,j;

    i = 10;
    j = 10;

    /* invocacion de la funcion */
    i += addition(i , j);

}
/* Definicion de la funcion */
int addition(int a, int b)
{
    return (a + b);
}
