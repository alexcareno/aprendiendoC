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

    int edad1, edad2;
    char sexo1, sexo2;

    printf("Digite la primer edad: ");
    scanf("%i", &edad1);
    printf("Digite primer sexo: ");
    scanf(" %c", &sexo1);
    printf("Digite la segunda edad: ");
    scanf("%i", &edad2);
    printf("Digite segundo sexo: ");
    scanf(" %c", &sexo2);


    if(edad1 > edad2) {
        printf("La edad mayor es %i \n: ", edad1);
        if(sexo1 == 'm') {
            printf("Sexo masulino");
        } else {
            printf("Sexo femenino");
        }
    } else {
        printf("La edad mayor es %i \n: ", edad2);
        if(sexo1 == 'm') {
            printf("Sexo masulino");
        } else {
            printf("Sexo femenino");
        }
    }

    getch();
    return 0;

}
