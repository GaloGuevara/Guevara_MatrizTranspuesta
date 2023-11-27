/*Construir un programa en lenguaje C donde el usuario ingrese las dimensiones de un arreglo bidimensional (matriz), 
el programa llene la matriz con números aleatorios entre 0 y 100. Luego, calcule la matriz transpuesta. 
El programa debe imprimir la matriz original y la matriz transpuesta.
*/
#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n=0, m=0;

    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d%*c", &n);
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d%*c", &m);

    printf("Se generará una matriz %dx%d\n", n,m);
    return 0;
}