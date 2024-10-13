#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char palabra1[31], palabra2[31];
    printf("Ingrese una palabra:");
    gets(palabra1);
    fflush(stdin);
    printf("Ingrese una palabra2:");
    gets(palabra2);

    if(strlen(palabra1)>strlen(palabra2)){
        printf("%s - %s", palabra1, palabra2);
    } else {
        printf("%s - %s", palabra2, palabra1);
    }
    getch();
    return 0;
}