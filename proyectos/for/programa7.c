#include <conio.h>
#include <stdio.h>

int main()
{

    int cantidad = 0;
    for(int i = 1; i <= 10; i++) {
        int valor;
        printf("Ingrese un valor");
        scanf("%i", &valor);
        if(i > 5) {
            cantidad = cantidad + valor;
        }
    }
    printf("\n\n%i", cantidad);
    getch();
    return 0;

}