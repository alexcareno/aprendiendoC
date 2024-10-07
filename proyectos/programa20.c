#include <conio.h>
#include <stdio.h>

int main()
{
    int dia, mes, anio;
    printf("Digite un dia: ");
    scanf("%i", &dia);
    printf("Digite mes: ");
    scanf("%i", &mes);
    printf("Digite anio: ");
    scanf("%i", &anio);
    if(dia==25 && mes==12) {
        printf("Feliz Navidad!");
    }
    getch();
    return 0;
}

