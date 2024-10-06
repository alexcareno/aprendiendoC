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
        int num1, num2, num3, mayor;
        printf("Digite la primer nota: ");
        scanf("%i", &num1);
        printf("Digite la segunda nota: ");
        scanf("%i", &num2);
        printf("Digite la tercer nota: ");
        scanf("%i", &num3);
        if(mayor < num1) {
          mayor = num1;
          if(mayor < num2) {
            mayor = num2;
            if(mayor < num3) {
              mayor = num3;
            }
          }
        }
        getch();
        return 0;
    }

