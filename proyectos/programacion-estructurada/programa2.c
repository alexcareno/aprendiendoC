#include <stdio.h>
#include <conio.h>

void cargaSuma() {
	int valor1, valor2, suma;
	printf("Ingresa el primer valor\n");
	scanf("%i", &valor1);
	printf("Ingresa el segundo valor\n");
	scanf("%i", &valor2);
	suma = valor1 + valor2;
	printf("El resultado es: %i\n", suma);
}

void separacion() {
    printf("====================================================");
}

int main() {
    cargaSuma();
    separacion();
    cargaSuma();
    separacion();
    getch();
    return 0;
}