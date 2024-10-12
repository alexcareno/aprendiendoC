#include<stdio.h>
#include<conio.h>

int main() {

    char palabra[29];
    printf("Ingrese palabra en minusculas");
    gets(palabra);
    int x = 0;
    while (palabra[x] != '\0') {
        if(palabra[x] == 'a' || palabra[x] == 'e' || palabra[x] == 'i' || palabra[x] == 'o' || palabra[x] == 'u'  ) {
            palabra[x] = '-';
        }
        x++;
    }
    printf("La nueva palabra es %s", palabra);
    getch();
    return 0;
}