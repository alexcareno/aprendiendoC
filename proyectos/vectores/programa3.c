#include <stdio.h>
#include <conio.h>

int main() {

    float turnoMan[4];
    float turnoTar[4];
    float man, tar;

    printf("Sueldos de empleados del turno de la mañana: \n");

    for (int i = 0; i < 4; i++) {
      printf("Ingrese el sueldo");
      scanf("%f", &turnoMan[i]);
    }

    printf("Sueldos de empleados del turno de la tarde: \n");

    for (int i = 0; i < 4; i++) {
        printf("Ingrese el sueldo");
        scanf("%f", &turnoTar[i]);
    }

    man = 0;
    tar = 0;
    for (int i = 0; i < 4; i++) {
      man += turnoMan[i];
      tar += turnoTar[i];
    }
    printf("Total de sueldos mañana: %.2f\n", man);
    printf("Total de sueldos tarde: %.2f\n", tar);

    getch();
    return 0;
}