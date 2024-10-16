#include <stdio.h>
#include <conio.h>

void vocale(char caracter){
	if(caracter == 'a' || caracter == 'A' || caracter == 'e' || caracter == 'E' || caracter == 'i' || caracter == 'I' || caracter == 'o' || caracter == 'O' || caracter == 'u' || caracter == 'U') {
		printf("%c es vocal\n", caracter);
	} else {
		printf("%c no es vocal\n", caracter);
	}
}

int main() {

	vocale('a');
	vocale('z');

	getch();
	return 0;
}