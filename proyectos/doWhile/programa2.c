#include <conio.h>
#include <stdio.h>

int main()
{

    int valor, suma = 0, cantidad = 0, promedio;

    do {
        printf("Ingresa un valor: ");
        scanf("%i", &valor);
        if(valor != 0) {
            suma = suma + valor;
            cantidad++;
        }
        printf("\n");
    } while (valor != 0);

    if(cantidad != 0) {
        promedio = suma / cantidad;
        printf("promedio: %i", promedio);
    } else {
        printf("No se ingresaron valores");
    }
    getch();
    return 0;

}
