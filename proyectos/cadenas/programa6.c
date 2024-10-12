#include<stdio.h>
#include<conio.h>

int main() {

    char palabra[16];
    printf("Ingrese palabra en minusculas\n");
    gets(palabra);
    if(palabra[0] == 'a') {
        printf("La palabra comienza en minuscula a");
    } else if(palabra[0] == 'A') {
        printf("La palabra comienza en mayuscula A");
    }


    getch();
    return 0;
}