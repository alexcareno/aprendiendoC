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

    int x = 1;
    int valor, pares = 0, impares = 0;
    printf("Digite un numero: ");
    scanf("%i", &valor);
    while(x <= valor) {
        int num;
        printf("Digite un numero: ");
        scanf("%i", &num);
        if(num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        x += 1;
    }

    printf("\n Los pares fueron: %i", pares);
    printf("\nLos impares fueron: %i", impares);

    getch();
    return 0;
}
