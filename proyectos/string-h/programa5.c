#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char palabra1[11], palabra2[11];
    printf("Ingrese su usuario:");
    gets(palabra1);
    fflush(stdin);
    printf("Ingrese su clave:");
    gets(palabra2);

    if(strcmp(palabra2, "abc123") == 0) {
        printf("Correcto!");
    } else {
        printf("Incorrecto!");
    }
    getch();
    return 0;
}