#include <conio.h>
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Digite un numero: ");
    scanf("%i", &num1);
    printf("Digite otro numero: ");
    scanf("%i", &num2);
    printf("Digite otro numero: ");
    scanf("%i", &num3);
    int mayor = 0;
    int menor = 0;
    if(num1 > num2 && num2 > num3) {
      mayor = num1;
    } else if (num2 > num3 && num2 > num1) {
      mayor = num2;
    } else if (num3 > num1 && num3 > num2) {
      mayor = num3;
    }

  if(num1 < num2 && num2 < num3) {
    menor = num1;
  } else if (num2 < num3 && num2 < num1) {
    menor = num2;
  } else if (num3 < num1 && num3 < num2) {
    menor = num3;
  }

    printf("El mayor es: %i y el menor es: %i", mayor, menor);

    getch();
    return 0;
}

