#include <conio.h>
#include <stdio.h>

int main()
{

    int valor, suma = 0;

    do {
        printf("Ingresa saldo: ");
        scanf("%i", &valor);
        if(valor > 0) {
            printf("Acreedor");
            suma = suma++;
        } else if (valor < 0) {
            printf("Deudor");
        } else
        {
            printf("Nulo");
        }
        printf("\n");
    } while (valor < 0);

    printf("Suma de acreedores: %i", suma);

    getch();
    return 0;

}
