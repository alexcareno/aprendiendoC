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
    int num1;
    printf("Digite un n%cmero: ", 163);
    scanf("%i", &num1);
    if(num1 > 999) {
        printf("Error");
    } else if ( num1 > 99) {
        printf("El n%cmero tiene tres digitos", 163);
    } else if ( num1 > 9) {
      printf("El n%cmero tiene dos digitos", 163);
    } else {
    printf("El n%cmero tiene un digito", 163);
    }
    getch();
    return 0;
}

