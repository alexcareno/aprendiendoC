#include <conio.h>
#include <stdio.h>
#include <string.h>

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
    char palabra1[31], palabra2[31], palabra3[31], palabra4[95];
    printf("Ingrese una palabra:");
    gets(palabra1);
    fflush(stdin);
    printf("Ingrese una palabra2:");
    gets(palabra2);
    printf("Ingrese una palabra3:");
    gets(palabra3);

    if(strcmp(palabra1, palabra2)>0 && strcmp(palabra1, palabra3)>0) {
        if(strcmp(palabra2, palabra3)>0) {
            strcpy(palabra4, palabra3);
            strcat(palabra4, ", ");
            strcat(palabra4, palabra2);
            strcat(palabra4, ", ");
            strcat(palabra4, palabra1);
        } else {
            strcpy(palabra4, palabra2);
            strcat(palabra4, ", ");
            strcat(palabra4, palabra3);
            strcat(palabra4, ", ");
            strcat(palabra4, palabra1);
        }
    } else if(strcmp(palabra2, palabra1)>0 && strcmp(palabra2, palabra3)>0) {
        if(strcmp(palabra1, palabra3)>0) {
            strcpy(palabra4, palabra3);
            strcat(palabra4, ", ");
            strcat(palabra4, palabra1);
            strcat(palabra4, ", ");
            strcat(palabra4, palabra2);
        } else {
            strcpy(palabra4, palabra1);
            strcat(palabra4, ", ");
            strcat(palabra4, palabra3);
            strcat(palabra4, ", ");
            strcat(palabra4, palabra2);
        }
    } else {
        if(strcmp(palabra1, palabra2)>0) {
            strcpy(palabra4, palabra2);
            strcat(palabra4, ", ");
            strcat(palabra4, palabra1);
            strcat(palabra4, ", ");
            strcat(palabra4, palabra3);
        } else {
            strcpy(palabra4, palabra1);
            strcat(palabra4, ", ");
            strcat(palabra4, palabra2);
            strcat(palabra4, ", ");
            strcat(palabra4, palabra3);
        }

    }
    printf("%s", palabra4);
    getch();
    return 0;
}
