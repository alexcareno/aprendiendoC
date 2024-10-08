#include<stdio.h>
#include<conio.h>

int main() {
    // Programa 3
     int num1, num2, suma, producto;
     printf("Ingrese primer valor:");
     scanf("%i", &num1);
     printf("Ingrese segundo valor:");
     scanf("%i", &num2);
     suma = num1 + num2;
     producto = num1 * num2;
     printf("La suma es: %i", suma);
     printf("\n");
     printf("La producto es: %i", producto);
     getch();
     return 0;

}