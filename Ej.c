/*Construir un programa en lenguaje C donde el usuario ingrese las dimensiones de un arreglo bidimensional (matriz),
el programa llene la matriz con números aleatorios entre 0 y 100. Luego, calcule la matriz transpuesta.
El programa debe imprimir la matriz original y la matriz transpuesta.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, m; // declaracion de variables

    // bloque de ingreso de las dimensiones por teclado
    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d%*c", &n);
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d%*c", &m);

    printf("Se va a generar una matriz [%dx%d]:\n\n", n, m); // confirmacion de las dimensiones ingresadas

    int matrix[n][m];
    srand(time(NULL)); // generacion de numeros aleatorios

    // rellenamos la matriz original con numeros aleatorios
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = rand() % 100; // Pendiente comprobar si genera hasta 100
        }
    }

    // mostramos la matriz en pantalla
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("------------------------------------------------\nLa matriz transpuesta es:\n");

    int matrix_t[m][n]; // declaramos la matriz transpuesta cambiando las filas con sus columnas

    // rellenamos la matriz transpuesta con los elementos de los indices de la matriz original invertidos
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix_t[i][j] = matrix[j][i]; // Aqui se hace la ubicacion de los elementos con los indices invertidos
        }
    }

    // mostramos en pantalla la matriz transpuesta
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix_t[i][j]);
        }
        printf("\n");
    }

    return 0;
}