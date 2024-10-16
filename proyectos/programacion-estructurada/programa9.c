#include <stdio.h>
#include <conio.h>

int calcMayor(int e1, int e2, int e3){
	if(e1>e2 && e1>e3) {
        return e1;
	} else if(e2>e1 && e2>e3) {
        return e2;
	} else {
          return e3;
	}
}

int main() {

    printf("El mayor es: %i", calcMayor(1, 2, 3));
    printf("El mayor es: %i", calcMayor(2, 3, 1));
    printf("El mayor es: %i", calcMayor(4, 2, 3));


	getch();
	return 0;
}