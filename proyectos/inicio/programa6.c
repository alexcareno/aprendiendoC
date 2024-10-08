#include <stdio.h>
#include <conio.h>

int main()
{


    int num1, num2, num3, num4, suma, promedio;
    printf("Digite un primer n%cmero: ", 163);
    scanf("%i", &num1);
    printf("Digite un segundo n%cmero: ", 163);
    scanf("%i", &num2);
    printf("Digite un tercer n%cmero: ", 163);
    scanf("%i", &num3);
    printf("Digite un cuarto n%cmero: ", 163);
    scanf("%i", &num4);
    suma = num1 + num2 + num3 + num4;
    promedio = suma/4;
    printf("La suma del primero y segundo es: %i", suma);
    printf("\n");
    printf("El promedio es: %i", promedio);
    getch();
    return 0;

}
