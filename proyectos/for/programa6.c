#include <conio.h>
#include <stdio.h>

int main()
{

    int n, mayorDoce = 0;
    float superficie;
    printf("Ingresa un numero entero: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int base, altura;
        printf("Ingresa la base: ");
        scanf("%i", &base);
        printf("Ingresa la altura: ");
        scanf("%i", &altura);
        superficie = (base*altura) / 2;
        if (superficie > 12) {
            mayorDoce++;
        }
        printf("Base del triangulo: %i\n: ", base);
        printf("Altura del triangulo: %i\n: ", altura);
        printf("Superficie del triangulo: %f\n: ", superficie);

    }

    printf("Los mayores a doce: %i", mayorDoce);

    getch();
    return 0;

}