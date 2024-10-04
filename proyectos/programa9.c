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
    int num1, num2;
    printf("Digite un numero: ");
    scanf("%i", &num1);
    printf("Digite otro numero: ");
    scanf("%i", &num2);
    if (num1 > num2){
        printf("%i", num1);
    } else {
      printf("%i", num2);
    }
    getch();
    return 0;
}
