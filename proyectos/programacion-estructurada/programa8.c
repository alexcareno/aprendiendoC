#include <stdio.h>
#include <conio.h>

void sexo(char caracter) {
    if(caracter == 'h') {
        printf("Hombre");
    } else if(caracter == 'm') {
      	printf("Mujer");
    }
}

int main() {
	sexo('m');
	sexo('h');
	getch();
	return 0;
}