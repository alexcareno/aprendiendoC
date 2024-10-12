#include<stdio.h>
#include<conio.h>

int main() {

    char palabra[16];
    printf("Ingrese palabra en minusculas\n");
    gets(palabra);
    int cant = 0;
    int x = 0;
    while (palabra[x] != '\0') {
        cant++;
        x++;
    }
    printf("La cantidad de letras que tiene la palabra %s es %i", palabra, cant);

    getch();
    return 0;
}