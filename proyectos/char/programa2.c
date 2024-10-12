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

    int suma = 0;
    int valor;
    char continua;

    do {
        printf("Ingrese un valor entero: ");
        scanf("%d", &valor);
        suma += valor;
        printf("Desea ingresar otro caracter?: ");
        scanf("%d", &continua);

    } while (continua == 's' || continua == 'S');

    printf("La suma de todos los valores ingresados es: %i", suma);


    getch();
    return 0;

}