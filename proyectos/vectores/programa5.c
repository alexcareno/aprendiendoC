#include <stdio.h>
#include <conio.h>

int main() {

    int cursoA[5], cursoB[5];
    int i, suma1 = 0, suma2 = 0, promedioa, promediob;
    printf("Ingresa nota del curso A\n: ");
    for (i = 0; i < 5; i++) {
      printf("Ingrese nota: \n");
      scanf("%d", &cursoA[i]);
    }

    printf("Ingresa nota del curso B\n: ");
    for (i = 0; i < 5; i++) {
        printf("Ingrese nota: \n");
        scanf("%d", &cursoB[i]);
    }

    for (i = 0; i < 5; i++) {
        suma1 = suma1 + cursoA[i];
        suma2 = suma2 + cursoB[i];
    }

    promedioa = suma1 / 5;
    promediob = suma2 / 5;
    printf("Apromedioa = %d\n", promedioa);
    printf("Apromediob = %d\n", promediob);
    if(promedioa == promediob)
    {
        printf("Tienen los mismos promedios");
    } else if (promedioa < promediob)
    {
        printf("Promedio b es mayor");
    } else
    {
        printf("Promedio a es mayor");
    }

    getch();
    return 0;
}