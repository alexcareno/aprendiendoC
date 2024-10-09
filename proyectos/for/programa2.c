#include <stdio.h>
#include <conio.h>

int main()
{

    int suma = 0;
    for( int f=1; f<=10; f++ ) {
        int valor;
        printf("Digite un numero: ");
        scanf("%i", &valor);
        suma = suma + valor;
    }
    int promedio = suma / 10;
    printf("la suma es: %i", suma);
    printf("el promedio es: %i", promedio);
    getch();
    return 0;

}