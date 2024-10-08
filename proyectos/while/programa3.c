#include <conio.h>
#include <stdio.h>

int main()
{

    int x = 1;
    int suma = 0;
    while(x <= 10) {
        int valor;
        printf("Digite un numero: ");
        scanf("%i", &valor);
        suma = suma + valor;
        x += 1;
    }

    int promedio = suma / 10;
    printf("\n La suma es: %i", suma);
    printf("El promedio es: %i", promedio);

    getch();
    return 0;

}