#include <conio.h>
#include <stdio.h>

/* ========= ACENTOS ===========
á: 160
é: 130
í: 161
ó: 162
ú: 163
Á: 181
É: 144
Í: 214
Ó: 224
Ú: 23
ñ: 164
Ñ: 165
==================================
 */

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
