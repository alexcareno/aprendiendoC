#include <conio.h>
#include <stdio.h>

int main()
{

    int suma1 = 0;
    int suma2 = 0;
    int x = 1;

    while (x <= 15) {
        int valor;
        printf("Ingresa tu valor: ");
        scanf("%i", &valor);
        suma1 += valor;
        x += 1;
    }

    x = 1;

    printf("Lista 2: \n");
    while (x <= 15) {
        int valor;
        printf("Ingresa tu valor: ");
        scanf("%i", &valor);
        suma1 += valor;
        x += 1;
    }

    if(suma1 > suma2) {
      printf("Lista 1 mayor\n");
    } else if (suma2 > suma1) {
      printf("Lista 2 mayor\n");
    } else {
      printf("Listas iguales\n");
    }

    getch();
    return 0;

}