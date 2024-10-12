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

    char letra;
    for (letra = 'A'; letra <= 'z'; letra++) {
        printf(" %c", letra);
    }


    getch();
    return 0;

}