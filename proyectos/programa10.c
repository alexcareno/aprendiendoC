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
    float num1, num2;
    printf("Digite un numero: ");
    scanf("%f", &num1);
    printf("Digite otro numero: ");
    scanf("%f", &num2);
    if (num1 > num2){
        printf("suma: %f \n", num1 + num2);
        printf("diferencia: %f", num1 - num2);
    } else {
        printf("producto: %f \n", num1 * num2);
        printf("division: %f", num1 / num2);
    }
    getch();
    return 0;
}