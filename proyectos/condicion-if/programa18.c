#include <conio.h>
#include <stdio.h>

int main()
{
    int dia, mes, anio;
    printf("Digite un numero: ");
    scanf("%i", &dia);
    printf("Digite otro numero: ");
    scanf("%i", &mes);
    printf("Digite otro numero: ");
    scanf("%i", &anio);
    if(mes==1 || mes==2 || mes==3) {
      printf("Corresponde al primer trimestre");
    }
    getch();
    return 0;
}

