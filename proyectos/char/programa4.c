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

    int num1, num2, valor = 0;
    char mat;
    printf("Ingrese un numero entero: \n");
    scanf("%i", &num1);
    printf("Ingrese otro numero entero: \n");
    scanf("%i", &num2);

    printf("Ingrese la operacion a realizar: \n");
    scanf(" %c", &mat);

    if (mat == '+') {
        valor = num1 + num2;
    } else if (mat == '-') {
        valor = num1 - num2;
    } else if (mat == '*') {
        valor = num1 * num2;
    } else if (mat == '/') {
        valor = num1 / num2;
    } else {
        printf("operacion incorrecta");
    }
    printf("Valor: %i", valor);

    getch();
    return 0;

}
