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

    int promedioM = 0, promedioV = 0, promedioN = 0;
    int sumaM = 0, sumaV = 0, sumaN = 0;
    for(int i = 1; i <= 5; i++) {
        int edad;
        printf("Ingresa tu edad");
        scanf("%i", &edad);
        sumaM = sumaM + edad;
    }

    for(int i = 1; i <= 6; i++) {
        int edad;
        printf("Ingresa tu edad");
        scanf("%i", &edad);
        sumaV = sumaV + edad;
    }


    for(int i = 1; i <= 11; i++) {
        int edad;
        printf("Ingresa tu edad");
        scanf("%i", &edad);
        sumaN = sumaN + edad;
    }

    promedioM = sumaM / 5;
    printf("Promedio mañana: %i", promedioM);
    promedioV = sumaV / 6;
    printf("Promedio tarde: %i", promedioV);
    promedioN = sumaN / 11;
    printf("Promedio noche: %i", promedioN);

    if(promedioM < promedioV && promedioM < promedioN) {
        printf("Mañana tiene un promedio menor");
    } else if(promedioV < promedioM && promedioV < promedioN) {
        printf("Tarde tiene un promedio menor");
    } else {
        printf("Noche tiene un promedio menor");
    }


    getch();
    return 0;

}
