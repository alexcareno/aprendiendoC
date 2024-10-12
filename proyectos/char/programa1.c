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

    char letra1 = 65;
    char letra2 = 'A';
    char letra3;

    printf("Ingrese un caracter");
    scanf(" %c", &letra3);

    printf("%c \n", letra1);
    printf("%c \n", letra2);
    printf("%c \n", letra3);

    getch();
    return 0;

}