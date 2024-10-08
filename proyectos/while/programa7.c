#include <conio.h>
#include <stdio.h>

int main()
{

    int x = 1;

    int n, bajo = 0, alto = 0;
    printf("Digite un numero: ");
    scanf("%i", &n);
    float sueldos = 0;
    while (x <= n) {
        float sueldo;
        printf("Ingresa tu sueldo: ");
        scanf("%f", &sueldo);
        if( sueldo > 300 ) {
            alto = alto + 1;
        } else {
            bajo = bajo + 1;
        }
        sueldos = sueldos + sueldo;
        x = x + 1;
    }

    printf("%i personas cobran mas de $500", alto);
    printf("%i personas cobran entre 100 y 300", bajo);
    printf("La empresa gasta %f en sueldos", sueldos);

    getch();
    return 0;

}