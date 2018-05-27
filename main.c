#include <stdio.h>

int main()
{
    int i, j, n, a[1000]; // El array a es el que permite cuanto le permites
    n = 28; // El numero que quieras hacer binario
    i = 0;  // Contador
    while (n > 0){
        a[i] = n % 2;
        n /= 2;
        ++i;
    }
    for (j = i - 1; j >= 0; --j)
        printf("%d", a[j]);
    printf("\n");
    return 0;
}

/*
         28|_2
          0  14|_2
             0  7|_2
                1  3|_2
                   1  1

         28=11100

 Lógica binaria. Para hacer la conversión de decimal a binario,
 hay que ir dividiendo el número decimal entre dos
 y anotar en una columna a la derecha el resto
 (un 0 si el resultado de la división es par y un 1 si es impar).
 La lista de ceros y unos leídos de abajo a arriba es el resultado.
 */


