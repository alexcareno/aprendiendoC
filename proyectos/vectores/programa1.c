#include <stdio.h>
#include <conio.h>

int main() {
    int f;
    int sueldos[5];
    for (f = 0; f < 5; f++) {
        printf("Digite sueldo #%i: ", f + 1);
        scanf("%i", &sueldos[f]);
    }
    printf("Listado de sueldos: \n");
    for (f = 0; f < 5; f++) {
        printf("%i \n", sueldos[f]);

    }
    getch();
    return 0;
}