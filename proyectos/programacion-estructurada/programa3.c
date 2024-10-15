#include <stdio.h>
#include <conio.h>

void calcularCuadrado() {
	int valor1, cuadrado;
	printf("Ingresa el primer valor\n");
	scanf("%i", &valor1);
    cuadrado = valor1 * valor1;
	printf("El resultado es: %i\n", cuadrado);
}

void calcularProducto() {
	int valor1, valor2, producto;
	printf("Ingresa el primer valor\n");
	scanf("%i", &valor1);
    printf("Ingresa el segundo valor\n");
	scanf("%i", &valor2);
    producto = valor1 * valor2;
	printf("El resultado es: %i\n", producto);
}

int main() {
	calcularCuadrado();
	calcularProducto();
	getch();
	return 0;
}