#include<stdio.h>
#include<conio.h>

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
    float sueldo;
    printf("Ingrese su sueldo\n");
    scanf("%f", &sueldo);
    if(sueldo > 3000) {
        printf("Esta persona debve abonar impuestos");
    }
    getch();
    return 0;
}
