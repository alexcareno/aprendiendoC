#include <stdio.h>
#include <conio.h>

void presentacion() {
    printf("Programa que permite cargar dos valores por teclado.\n");
    printf("Efectuar la suma de dichos valores\n");
    printf("Muestra el resultado\n");
    printf("=================================================\n");
}

void cargarSuma() {
    int valor1, valor2, suma;
    printf("Ingresa el primer valor\n");
    scanf("%i", &valor1);
    printf("Ingresa el segundo valor\n");
    scanf("%i", &valor2);
    suma = valor1 + valor2;
    printf("El resultado es: %i\n", suma);
}

void finalizacion() {
    printf("=================================================\n");
    printf("Gracias por utilizar este programa");
}

