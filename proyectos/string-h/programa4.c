#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char palabra1[31], palabra2[31], palabraLargo[62];
    printf("Ingrese una palabra:");
    gets(palabra1);
    fflush(stdin);
    printf("Ingrese una palabra2:");
    gets(palabra2);

    strcpy(palabraLargo, palabra1);
    strcat(palabraLargo, " ");
    strcat(palabraLargo, palabra2);
    printf("El nombre completo %s ", palabraLargo);
    getch();
    return 0;
}