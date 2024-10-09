#include <stdio.h>
#include <conio.h>

int main()
{

    int cantidad = 0, numero;
    printf("Ingrese un numero");
    scanf("%i", &numero);
    for(int i = 1; i <= numero; i++) {
      int valor;
        printf("Ingrese un valor");
        scanf("%i", &valor);
        if(valor >= 1000) {
          cantidad++;
        }
    }
    printf("\n\n%i valores mayores a 1000", cantidad);
    getch();
    return 0;

}