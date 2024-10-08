#include <conio.h>
#include <stdio.h>

int main()
{

    int i = 1;
    int mayores = 0, menores = 0;

    while (i <= 10) {
        int nota = 0;
        printf("Ingresa tu nota:");
        scanf("%i", &nota);
        if (nota >= 7) {
            mayores = mayores + 1;
        } else {
            menores = menores + 1;
        }
        i += 1;
    }

    printf("%i alumnos tienen notas mayores o iguales a 7. \n", mayores);
    printf("%i alumnos tienen notas menores a 7. \n", menores);

    getch();
    return 0;

}