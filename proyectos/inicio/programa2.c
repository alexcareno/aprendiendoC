#include<stdio.h>
#include<conio.h>

// Programa 2
int main()
{
    int lado;
    int superficie;
    printf("Ingresa un valor del lado del cuadrado: ");
    scanf("%i",&lado);
    superficie=lado*lado;
    printf("El superficie es:%i",superficie);
    printf("La superficie del cuadrado es:\n");
    printf("%i", superficie);
    getch();
    return 0;
}