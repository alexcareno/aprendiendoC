#include <conio.h>
#include <stdio.h>

int main()
{

    int x = 1;
    int valor, pares = 0, impares = 0;
    printf("Digite un numero: ");
    scanf("%i", &valor);
    while(x <= valor) {
        int num;
        printf("Digite un numero: ");
        scanf("%i", &num);
        if(num % 2 == 0) {
          pares++;
        } else {
          impares++;
        }
    }

    printf("\n Los pares fueron: %i", pares);
    printf("\nLos impares fueron: %i", impares);

    getch();
    return 0;

}