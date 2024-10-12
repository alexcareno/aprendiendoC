#include<stdio.h>
#include<conio.h>

int main() {

    char oracion[201];
    printf("Ingrese palabra en minusculas\n");
    gets(oracion);
    int x = 0;
    int palabras = 0;
    while (oracion[x] != '\0') {
        if(oracion[x] == ' ') {
            palabras++;
        }
        x++;
    }
    palabras += 1;
    printf("La cantidad de palabras en la oracion es:  %i", palabras);

    getch();
    return 0;
}