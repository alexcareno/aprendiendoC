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


    int numeros[10];
    int orden;
    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%i", &numeros[i]);
    }

    orden = 1;
    for(int i = 0; i < 9; i++) {
        if(numeros[i+1]<numeros[i]) {
            orden = 0;
        }
    }

    if(orden == 1) {
        printf("El vector esta ordenado de menor a mayor");
    } else {
        printf("El vector no esta ordenado de menor a mayor");
    }


    getch();
    return 0;

}
