#include <stdio.h>
#include <conio.h>

int main() {

    int numeros[10];
    int orden;
    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%i", &numeros[i]);
    }

    orden = 1;
    for(int i = 0; i < 9; i++) {
        if(numeros[i+1]<numeros[i]) {
            orden = 0;
            break;
        }
    }

    if(orden == 1) {
        printf("El vector esta ordenado de menor a mayor");
    } else {
      printf("El vector no esta ordenado de menor a mayor");
    }


    getch();
    return 0;
}