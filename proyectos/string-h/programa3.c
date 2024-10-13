#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char palabra1[31], palabra2[31], palabraLargo[31];
    printf("Ingrese una palabra:");
    gets(palabra1);
    fflush(stdin);
    printf("Ingrese una palabra2:");
    gets(palabra2);

    if(strlen(palabra1) > strlen(palabra2)) {
        strcpy(palabraLargo, palabra1);
    } else {
        strcpy(palabraLargo, palabra2);
    }
    printf("El nombre %s tiene mas caracteres", palabraLargo);
    getch();
    return 0;
}