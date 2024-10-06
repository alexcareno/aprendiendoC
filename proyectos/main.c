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
    int preguntas = 10, contestadasOK = 4;

    int porcentaje = contestadasOK * 100 / preguntas;

    if(porcentaje >= 90) {
        printf("Nivel maximo");
    } else if (porcentaje >= 75 && porcentaje < 90) {
        printf("Nivel medio");
    } else if (porcentaje >= 50 && porcentaje < 75) {
        printf("Nivel regular");
    } else {
        printf("Fuera de nivel");
    }
    getch();
    return 0;
}

