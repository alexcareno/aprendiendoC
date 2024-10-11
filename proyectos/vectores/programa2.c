#include <stdio.h>
#include <conio.h>

int main() {

    float alturas[5], suma, promedio;
    int may, men;

    for (int f = 0; f < 5; f++) {
        printf("Digite la altura de la persona #%i: ", f + 1);
        scanf("%f", &alturas[f]);
    }

    suma = 0;
    for (int f = 0; f < 5; f++) {
      suma = suma + alturas[f];
    }

    promedio = suma / 5;
    printf("Promedio de alturas: ");
    printf("%0.2f", promedio);
    printf("\n");
    may = 0;
    men = 0;
    for (int f = 0; f < 5; f++) {
      if (alturas[f] > promedio) {
        may++;
      } else {
        if(alturas[f] < promedio) {
          men++;
        }
      }
    }

    printf("Cantidad de personas con altures mayores al promedio: \n");
    printf("%i", may);
  printf("Cantidad de personas con altures menores al promedio: \n");
  printf("%i", men);

    getch();
    return 0;
}