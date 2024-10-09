#include <conio.h>
#include <stdio.h>

int main()
{
    int suma = 0, mul15 = 0, positivos = 0, negativos = 0;
    for(int i = 1; i <= 10; i++) {
        int valor;
        printf("Ingrese un numero");
        scanf("%i", &valor);
        if(valor > 0) {
          positivos++;
        } else {
          negativos++;
        }

        if(valor % 15 == 0) {
          mul15++;
        }

        suma += valor;
    }

    printf("\n\nPositivos: %i ", positivos);
    printf("\nnegativos: %i", negativos);
    printf("\nmultiplos de 15: %i", mul15);
    printf("\nsuma total: %i", suma);


    getch();
    return 0;

}