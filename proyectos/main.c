#include <stdio.h>
#include <conio.h>

void cargarValores() {
	int valor1, valor2, valor3, menor;
	printf("Ingresa el primer valor\n");
	scanf("%i", &valor1);
	printf("Ingresa el segundo valor\n");
	scanf("%i", &valor2);
	printf("Ingresa el tercer valor\n");
	scanf("%i", &valor3);
	if(valor1 < valor2 && valor1 < valor3) {
		printf("El valor menor es: %i\n", valor1);
	} else if(valor2 < valor1 && valor2 < valor3) {
		printf("El valor menor es: %i\n", valor2);
	} else {
		printf("El valor menor es: %i\n", valor3);
	}
}

void separacion() {
	printf("=================================================\n");
}

int main()
{
	for(int i = 1; i <= 3; i++) {
		cargarValores();
		separacion();
	}
	getch();
	return 0;
}