#include <stdio.h>
#include <conio.h>

int main() {


    int elementos[8];
    int suma = 0, mayor = 0, extra = 0;
    for (int i = 0; i < 8; i++) {
        printf("Ingresa un numero entero: ");
        scanf("%i", &elementos[i]);
        if (elementos[i] > 50) {
            extra++;
        }
        if(elementos[i] > 36) {
            mayor += elementos[i];
        }
        suma += elementos[i];
    }

    printf("Mayores a 50: %i", extra);
    printf("La suma total es es: %i", suma);
    printf("Suma de mayores de 36: %i", mayor);

    getch();
    return 0;
}