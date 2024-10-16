#include <stdio.h>
#include <conio.h>

void loopNumber(int valor1){
	if(valor1 < 0) {
		printf("Error");
	} else {
		for(int i = 1; i <= valor1; i++) {
            printf("%i", i);
		}
	}
}

int main() {

	loopNumber(10);
	getch();
	return 0;
}