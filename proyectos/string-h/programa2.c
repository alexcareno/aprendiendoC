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
    if(strcmp(palabra1, palabra2)==0){
      printf("Palabras iguales \n");
    } else if (strcmp(palabra1, palabra2)>0){
      printf("Palabra 1 mayor alfabeticamente \n");
    } else {
        printf("Palabra 2 mayor alfabeticamente \n");
    }
    getch();
    return 0;
}