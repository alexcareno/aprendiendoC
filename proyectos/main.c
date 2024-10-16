#include <stdio.h>
#include <conio.h>

void imprimirMayor(int v1 , int v2){
	if(v1>v2) {
		printf("El mayor es %i", v1);
	} else {
		printf("El mayor es %i", v2);
	}
}

int main() {
	int v1, v2;
	printf("Ingresa el primer valor: ");
	scanf("%i", &v1);
	printf("Ingresa el segundo valor: ");
	scanf("%i", &v2);
	imprimirMayor(v1, v2);
	getch();
	return 0;

}