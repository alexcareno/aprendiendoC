#include<stdio.h>
#include<conio.h>

int main() {
    char nombre1[21], nombre2[21];
    int edad1, edad2;
    printf("Ingrese el nombre de la primer persona \n");
    gets(nombre1);
    printf("Ingrese la edad de la primer persona \n");
    scanf("%i", &edad1);
    fflush(stdin); // limpia buffer del teclado en scanf previo
    printf("Ingrese el nombre de la segunda persona \n");
    gets(nombre2);
    printf("Ingrese la edad de la segunda persona \n");
    scanf("%i", &edad2);
    if(edad1 > edad2) {
        printf("La persona con mayor edad es: %s \n", nombre1);
    } else if(edad2 > edad1) {
        printf("La persona con mayor edad es: %s \n", nombre2);
    } else {
        printf("Tienen la misma edad: %s y %s", nombre1, nombre2);
    }


    getch();
    return 0;
}