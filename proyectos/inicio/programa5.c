#include <stdio.h>
#include <conio.h>

int main() {
    int num1, num2, num3, num4, suma, producto;
    printf("Digite un primer número: ");
    scanf("%i", &num1);
    printf("Digite un segundo número: ");
    scanf("%i", &num2);
    printf("Digite un tercer número: ");
    scanf("%i", &num3);
    printf("Digite un cuarto número: ");
    printf("%i", &num4);
    suma = num1 + num2;
    producto = num1 * num3;
    printf("La suma es: %i", suma);
    printf("El producto es: %i", producto);
    getch();
    return 0;
}