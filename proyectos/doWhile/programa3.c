#include <conio.h>
#include <stdio.h>

int main()
{

    int cant1 = 0, cant2 = 0, cant3 = 0, peso, suma;
    do {
        printf("Ingrese el peso de la pieza");
        scanf("%i", &peso);

        if(peso > 10.2) {
            cant1++;
            } else {
                if(peso >= 9.2) {
                  cant2++;
                } else {
                    if(peso > 0) {
                      cant3++;
                    }
                }
         }

    } while (peso != 0);

    suma = cant1 + cant2 + cant3;
    printf("cant1: %i \n cant2: %i \n cant3: %i \n suma: %i", cant1, cant2, cant3, suma);


    getch();
    return 0;

}
