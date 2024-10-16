#include <stdio.h>
#include <conio.h>

int calcularPerimetro(int lado){
	return lado * 4;
}

int calcularArea(int lado) {
    return lado * lado;
}

int main() {
    printf("El perimetro del cuadrado es: %i", calcularPerimetro(5));
	printf("El area del cuadrado es: %i", calcularArea(5));
	getch();
	return 0;
}