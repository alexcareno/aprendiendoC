#include <conio.h>
#include <stdio.h>

int main()
{

    int valor, suma = 0;

    do {
        printf("Ingresa un valor entre 0 y 9999 (9999 finaliza): ");
        scanf("%i", &valor);
        if(valor != 9999) {
            suma = suma + valor;
        }
        printf("\n");
    } while (valor != 9999);

    if(suma > 0) {
        printf("El valor es positivo");
    } else if ( suma < 0 ) {
        printf("El valor es negativo");
    } else {
        printf("El valor es 0");
    }

    getch();
    return 0;

}
