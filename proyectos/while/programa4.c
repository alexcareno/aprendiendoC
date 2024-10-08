#include <conio.h>
#include <stdio.h>

int main()
{

    int x = 1;
    int cantidad = 0;
    int valor;
    printf("Digite las piezas a procesar: ");
        scanf("%i", &valor);
    while(x <= valor) {
        float largo;
        printf("Digite el largo: ");
        scanf("%f", &largo);
        if(largo >= 1.20 && largo <= 1.30) {
           cantidad = cantidad + 1;
        }
        x += 1;
    }

    printf("La cantidad apta: %i", cantidad);

    getch();
    return 0;

}