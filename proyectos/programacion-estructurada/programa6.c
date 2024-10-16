#include <stdio.h>
#include <conio.h>

int pago(int pago, int horasTrabajadas){
	int total = pago * horasTrabajadas;
    return total;
}

int main() {
    int pagoTotal = pago(12, 40);
    printf("El total a pagar es: %i", pagoTotal);
	getch();
	return 0;
}