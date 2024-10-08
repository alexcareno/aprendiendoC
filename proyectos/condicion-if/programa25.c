#include <conio.h>
#include <stdio.h>

int main()
{
    float sueldo, antiguedad;
    printf("Digite un numero: ");
    scanf("%f", &sueldo);
    printf("Digite otro numero: ");
    scanf("%f", &antiguedad);
    if(sueldo < 500 && antiguedad >= 10) {
      sueldo = sueldo * 1.20;
      printf("Sueldo nuevo: %.2f", sueldo);
    } else if(sueldo < 500 && antiguedad < 10) {
      sueldo = sueldo * 1.05;
        printf("Sueldo nuevo: %.2f", sueldo);
    } else if (sueldo >= 500) {
      printf("Sueldo: %.2f", sueldo);
    }
    getch();
    return 0;
}

