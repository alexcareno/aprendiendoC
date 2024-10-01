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


        int num1, num2, num3, num4, suma, producto;
        printf("Digite un primer n%cmero: ", 163);
        scanf("%i", &num1);
        printf("Digite un segundo n%cmero: ", 163);
        scanf("%i", &num2);
        printf("Digite un tercer n%cmero: ", 163);
        scanf("%i", &num3);
        printf("Digite un cuarto n%cmero: ", 163);
        scanf("%i", &num4);
        suma = num1 + num2;
        producto = num3 * num4;
        printf("La suma del primero y segundo es: %i", suma);
        printf("\n");
        printf("El producto del tercero y cuarto es: %i", producto);
        getch();
        return 0;

}
