#include <conio.h>
#include <stdio.h>

/* ========= ACENTOS ===========
á: 160
é: 130
í: 161
ó: 162
ú: 163
Á: 181
É: 144
Í: 214
Ó: 224
Ú: 23
ñ: 164
Ñ: 165
==================================
 */

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
