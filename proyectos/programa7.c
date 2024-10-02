#include <stdio.h>
#include <conio.h>

int main()
{

    int cantidad;
    float precio, total;
    printf("Digite el precio:\n");
    scanf("%f", &precio);
    printf("Cantidad de articulos:\n");
    scanf("%i", &cantidad);
    total = precio * cantidad;
    printf("\n");
    printf("El total a pagar es: %f", total);
    getch();
    return 0;

}
